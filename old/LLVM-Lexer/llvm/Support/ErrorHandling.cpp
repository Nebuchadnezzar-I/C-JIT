//===- lib/Support/ErrorHandling.cpp - Callbacks for errors ---------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file defines an API used to indicate fatal error conditions.  Non-fatal
// errors (most of them) should be handled through LLVMContext.
//
//===----------------------------------------------------------------------===//

#include "../AbstractDataTypes/SmallVector.h"
#include "../AbstractDataTypes/Twine.h"
#include "../Config/llvm-config.h"

#include "../Config/llvm-config.h" // for LLVM_ENABLE_THREADS

//
#include "./Debug.h"
#include "./Process.h"
#include "./Signals.h"
#include "./Threading.h"
#include "./raw_ostream.h"
//

#include <cassert>
#include <cstdlib>
#include <llvm-c/ErrorHandling.h>
#include <mutex>
#include <new>

#if defined(HAVE_UNISTD_H)
# include <unistd.h>
#endif
#if defined(_MSC_VER)
# include <io.h>
# include <fcntl.h>
#endif

using namespace llvm;

static fatal_error_handler_t ErrorHandler = nullptr;
static void *ErrorHandlerUserData = nullptr;

static fatal_error_handler_t BadAllocErrorHandler = nullptr;
static void *BadAllocErrorHandlerUserData = nullptr;

#if LLVM_ENABLE_THREADS == 1
// Mutexes to synchronize installing error handlers and calling error handlers.
// Do not use ManagedStatic, or that may allocate memory while attempting to
// report an OOM.
//
// This usage of std::mutex has to be conditionalized behind ifdefs because
// of this script:
//   compiler-rt/lib/sanitizer_common/symbolizer/scripts/build_symbolizer.sh
// That script attempts to statically link the LLVM symbolizer library with the
// STL and hide all of its symbols with 'opt -internalize'. To reduce size, it
// cuts out the threading portions of the hermetic copy of libc++ that it
// builds. We can remove these ifdefs if that script goes away.
static std::mutex ErrorHandlerMutex;
static std::mutex BadAllocErrorHandlerMutex;
#endif

void llvm::install_fatal_error_handler(fatal_error_handler_t handler,
                                       void *user_data) {
#if LLVM_ENABLE_THREADS == 1
    std::lock_guard<std::mutex> Lock(ErrorHandlerMutex);
#endif
    assert(!ErrorHandler && "Error handler already registered!\n");
    ErrorHandler = handler;
    ErrorHandlerUserData = user_data;
}

void llvm::remove_fatal_error_handler() {
#if LLVM_ENABLE_THREADS == 1
    std::lock_guard<std::mutex> Lock(ErrorHandlerMutex);
#endif
    ErrorHandler = nullptr;
    ErrorHandlerUserData = nullptr;
}

void llvm::report_fatal_error(const char *Reason, bool GenCrashDiag) {
    report_fatal_error(Twine(Reason), GenCrashDiag);
}

void llvm::report_fatal_error(StringRef Reason, bool GenCrashDiag) {
    report_fatal_error(Twine(Reason), GenCrashDiag);
}

void llvm::report_fatal_error(const Twine &Reason, bool GenCrashDiag) {
    llvm::fatal_error_handler_t handler = nullptr;
    void* handlerData = nullptr;
    {
        // Only acquire the mutex while reading the handler, so as not to invoke a
        // user-supplied callback under a lock.
#if LLVM_ENABLE_THREADS == 1
        std::lock_guard<std::mutex> Lock(ErrorHandlerMutex);
#endif
        handler = ErrorHandler;
        handlerData = ErrorHandlerUserData;
    }

    if (handler) {
        handler(handlerData, Reason.str().c_str(), GenCrashDiag);
    } else {
        // Blast the result out to stderr.  We don't try hard to make sure this
        // succeeds (e.g. handling EINTR) and we can't use errs() here because
        // raw ostreams can call report_fatal_error.
        SmallVector<char, 64> Buffer;
        raw_svector_ostream OS(Buffer);
        OS << "LLVM ERROR: " << Reason << "\n";
        StringRef MessageStr = OS.str();
        ssize_t written = ::write(2, MessageStr.data(), MessageStr.size());
        (void)written; // If something went wrong, we deliberately just give up.
    }

    // If we reached here, we are failing ungracefully. Run the interrupt handlers
    // to make sure any special cleanups get done, in particular that we remove
    // files registered with RemoveFileOnSignal.
    sys::RunInterruptHandlers();

    if (GenCrashDiag)
        abort();
    else
        exit(1);
}

void llvm::install_bad_alloc_error_handler(fatal_error_handler_t handler,
                                           void *user_data) {
#if LLVM_ENABLE_THREADS == 1
    std::lock_guard<std::mutex> Lock(BadAllocErrorHandlerMutex);
#endif
    assert(!BadAllocErrorHandler &&
           "Bad alloc error handler already registered!\n");
    BadAllocErrorHandler = handler;
    BadAllocErrorHandlerUserData = user_data;
}

void llvm::remove_bad_alloc_error_handler() {
#if LLVM_ENABLE_THREADS == 1
    std::lock_guard<std::mutex> Lock(BadAllocErrorHandlerMutex);
#endif
    BadAllocErrorHandler = nullptr;
    BadAllocErrorHandlerUserData = nullptr;
}

void llvm::report_bad_alloc_error(const char *Reason, bool GenCrashDiag) {
    fatal_error_handler_t Handler = nullptr;
    void *HandlerData = nullptr;
    {
        // Only acquire the mutex while reading the handler, so as not to invoke a
        // user-supplied callback under a lock.
#if LLVM_ENABLE_THREADS == 1
        std::lock_guard<std::mutex> Lock(BadAllocErrorHandlerMutex);
#endif
        Handler = BadAllocErrorHandler;
        HandlerData = BadAllocErrorHandlerUserData;
    }

    if (Handler) {
        Handler(HandlerData, Reason, GenCrashDiag);
        llvm_unreachable("bad alloc handler should not return");
    }

#ifdef LLVM_ENABLE_EXCEPTIONS
    // If exceptions are enabled, make OOM in malloc look like OOM in new.
    throw std::bad_alloc();
#else
    // Don't call the normal error handler. It may allocate memory. Directly write
    // an OOM to stderr and abort.
    const char *OOMMessage = "LLVM ERROR: out of memory\n";
    const char *Newline = "\n";
    (void)!::write(2, OOMMessage, strlen(OOMMessage));
    (void)!::write(2, Reason, strlen(Reason));
    (void)!::write(2, Newline, strlen(Newline));
    abort();
#endif
}

#ifdef LLVM_ENABLE_EXCEPTIONS
// Do not set custom new handler if exceptions are enabled. In this case OOM
// errors are handled by throwing 'std::bad_alloc'.
void llvm::install_out_of_memory_new_handler() {
}
#else
// Causes crash on allocation failure. It is called prior to the handler set by
// 'install_bad_alloc_error_handler'.
static void out_of_memory_new_handler() {
    llvm::report_bad_alloc_error("Allocation failed");
}

// Installs new handler that causes crash on allocation failure. It is called by
// InitLLVM.
void llvm::install_out_of_memory_new_handler() {
    std::new_handler old = std::set_new_handler(out_of_memory_new_handler);
    (void)old;
    assert((old == nullptr || old == out_of_memory_new_handler) &&
           "new-handler already installed");
}
#endif

void llvm::llvm_unreachable_internal(const char *msg, const char *file,
                                     unsigned line) {
    // This code intentionally doesn't call the ErrorHandler callback, because
    // llvm_unreachable is intended to be used to indicate "impossible"
    // situations, and not legitimate runtime errors.
    if (msg)
        dbgs() << msg << "\n";
    dbgs() << "UNREACHABLE executed";
    if (file)
        dbgs() << " at " << file << ":" << line;
    dbgs() << "!\n";
    abort();
#ifdef LLVM_BUILTIN_UNREACHABLE
    // Windows systems and possibly others don't declare abort() to be noreturn,
    // so use the unreachable builtin to avoid a Clang self-host warning.
    LLVM_BUILTIN_UNREACHABLE;
#endif
}

static void bindingsErrorHandler(void *user_data, const char *reason,
                                 bool gen_crash_diag) {
    LLVMFatalErrorHandler handler =
        LLVM_EXTENSION reinterpret_cast<LLVMFatalErrorHandler>(user_data);
    handler(reason);
}

void LLVMInstallFatalErrorHandler(LLVMFatalErrorHandler Handler) {
    install_fatal_error_handler(bindingsErrorHandler,
                                LLVM_EXTENSION reinterpret_cast<void *>(Handler));
}

void LLVMResetFatalErrorHandler() {
    remove_fatal_error_handler();
}

#ifdef _WIN32

#endif

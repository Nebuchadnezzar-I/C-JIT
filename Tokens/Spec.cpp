#include <string>

enum MacroTokenKind {
    //
    //          Macro Symbol Index
    //

    //
    //           _ (underscore)
    //
    __ALIGNAS_IS_DEFINED,
    __BOOL_TRUE_FALSE_ARE_DEFINED,
    __CPP_LIB_ADAPTOR_ITERATOR_PAIR_CONSTRUCTOR,
    __CPP_LIB_ADDRESSOF_CONSTEXPR,
    __CPP_LIB_ALGORITHM_DEFAULT_VALUE_TYPE,
    __CPP_LIB_ALGORITHM_ITERATOR_REQUIREMENTS,
    __CPP_LIB_ALLOCATE_AT_LEAST,
    __CPP_LIB_ALLOCATOR_TRAITS_IS_ALWAYS_EQUAL,
    __CPP_LIB_ANY,
    __CPP_LIB_APPLY,
    __CPP_LIB_ARRAY_CONSTEXPR,
    __CPP_LIB_AS_CONST,
    __CPP_LIB_ASSOCIATIVE_HETEROGENEOUS_ERASURE,
    __CPP_LIB_ASSOCIATIVE_HETEROGENEOUS_INSERTION,
    __CPP_LIB_ASSUME_ALIGNED,
    __CPP_LIB_ATOMIC_FLAG_TEST,
    __CPP_LIB_ATOMIC_FLOAT,
    __CPP_LIB_ATOMIC_IS_ALWAYS_LOCK_FREE,
    __CPP_LIB_ATOMIC_LOCK_FREE_TYPE_ALIASES,
    __CPP_LIB_ATOMIC_MIN_MAX,
    __CPP_LIB_ATOMIC_REF,
    __CPP_LIB_ATOMIC_SHARED_PTR,
    __CPP_LIB_ATOMIC_VALUE_INITIALIZATION,
    __CPP_LIB_ATOMIC_WAIT,
    __CPP_LIB_BARRIER,
    __CPP_LIB_BIND_BACK,
    __CPP_LIB_BIND_FRONT,
    __CPP_LIB_BIT_CAST,
    __CPP_LIB_BITOPS,
    __CPP_LIB_BITSET,
    __CPP_LIB_BOOL_CONSTANT,
    __CPP_LIB_BOUNDED_ARRAY_TRAITS,
    __CPP_LIB_BOYER_MOORE_SEARCHER,
    __CPP_LIB_BYTE,
    __CPP_LIB_BYTESWAP,
    __CPP_LIB_CHAR8_T,
    __CPP_LIB_CHRONO,
    __CPP_LIB_CHRONO_UDLS,
    __CPP_LIB_CLAMP,
    __CPP_LIB_COMMON_REFERENCE,
    __CPP_LIB_COMMON_REFERENCE_WRAPPER,
    __CPP_LIB_COMPLEX_UDLS,
    __CPP_LIB_CONCEPTS,
    __CPP_LIB_CONSTEXPR_ALGORITHMS,
    __CPP_LIB_CONSTEXPR_BITSET,
    __CPP_LIB_CONSTEXPR_CHARCONV,
    __CPP_LIB_CONSTEXPR_CMATH,
    __CPP_LIB_CONSTEXPR_COMPLEX,
    __CPP_LIB_CONSTEXPR_DYNAMIC_ALLOC,
    __CPP_LIB_CONSTEXPR_FUNCTIONAL,
    __CPP_LIB_CONSTEXPR_ITERATOR,
    __CPP_LIB_CONSTEXPR_MEMORY,
    __CPP_LIB_CONSTEXPR_NUMERIC,
    __CPP_LIB_CONSTEXPR_STRING,
    __CPP_LIB_CONSTEXPR_STRING_VIEW,
    __CPP_LIB_CONSTEXPR_TUPLE,
    __CPP_LIB_CONSTEXPR_TYPEINFO,
    __CPP_LIB_CONSTEXPR_UTILITY,
    __CPP_LIB_CONSTEXPR_VECTOR,
    __CPP_LIB_CONSTRAINED_EQUALITY,
    __CPP_LIB_CONTAINERS_RANGES,
    __CPP_LIB_COPYABLE_FUNCTION,
    __CPP_LIB_COROUTINE,
    __CPP_LIB_DEBUGGING,
    __CPP_LIB_DESTROYING_DELETE,
    __CPP_LIB_ENABLE_SHARED_FROM_THIS,
    __CPP_LIB_ENDIAN,
    __CPP_LIB_ERASE_IF,
    __CPP_LIB_EXCHANGE_FUNCTION,
    __CPP_LIB_EXECUTION,
    __CPP_LIB_EXPECTED,
    __CPP_LIB_FILESYSTEM,
    __CPP_LIB_FLAT_MAP,
    __CPP_LIB_FLAT_SET,
    __CPP_LIB_FORMAT,
    __CPP_LIB_FORMAT_PATH,
    __CPP_LIB_FORMAT_RANGES,
    __CPP_LIB_FORMATTERS,
    __CPP_LIB_FORWARD_LIKE,
    __CPP_LIB_FREESTANDING_CHAR_TRAITS,
    __CPP_LIB_FREESTANDING_CHARCONV,
    __CPP_LIB_FREESTANDING_CSTDLIB,
    __CPP_LIB_FREESTANDING_CSTRING,
    __CPP_LIB_FREESTANDING_CWCHAR,
    __CPP_LIB_FREESTANDING_ERRC,
    __CPP_LIB_FREESTANDING_FEATURE_TEST_MACROS,
    __CPP_LIB_FREESTANDING_FUNCTIONAL,
    __CPP_LIB_FREESTANDING_ITERATOR,
    __CPP_LIB_FREESTANDING_MEMORY,
    __CPP_LIB_FREESTANDING_OPERATOR_NEW,
    __CPP_LIB_FREESTANDING_RANGES,
    __CPP_LIB_FREESTANDING_RATIO,
    __CPP_LIB_FREESTANDING_TUPLE,
    __CPP_LIB_FREESTANDING_UTILITY,
    __CPP_LIB_FSTREAM_NATIVE_HANDLE,
    __CPP_LIB_FUNCTION_REF,
    __CPP_LIB_GCD_LCM,
    __CPP_LIB_GENERATOR,
    __CPP_LIB_GENERIC_ASSOCIATIVE_LOOKUP,
    __CPP_LIB_GENERIC_UNORDERED_LOOKUP,
    __CPP_LIB_HARDWARE_INTERFERENCE_SIZE,
    __CPP_LIB_HAS_UNIQUE_OBJECT_REPRESENTATIONS,
    __CPP_LIB_HAZARD_POINTER,
    __CPP_LIB_HYPOT,
    __CPP_LIB_INCOMPLETE_CONTAINER_ELEMENTS,
    __CPP_LIB_INT_POW2,
    __CPP_LIB_INTEGER_COMPARISON_FUNCTIONS,
    __CPP_LIB_INTEGER_SEQUENCE,
    __CPP_LIB_INTEGRAL_CONSTANT_CALLABLE,
    __CPP_LIB_INTERPOLATE,
    __CPP_LIB_INVOKE,
    __CPP_LIB_INVOKE_R,
    __CPP_LIB_IOS_NOREPLACE,
    __CPP_LIB_IS_AGGREGATE,
    __CPP_LIB_IS_CONSTANT_EVALUATED,
    __CPP_LIB_IS_FINAL,
    __CPP_LIB_IS_IMPLICIT_LIFETIME,
    __CPP_LIB_IS_INVOCABLE,
    __CPP_LIB_IS_LAYOUT_COMPATIBLE,
    __CPP_LIB_IS_NOTHROW_CONVERTIBLE,
    __CPP_LIB_IS_NULL_POINTER,
    __CPP_LIB_IS_POINTER_INTERCONVERTIBLE,
    __CPP_LIB_IS_SCOPED_ENUM,
    __CPP_LIB_IS_SWAPPABLE,
    __CPP_LIB_IS_WITHIN_LIFETIME,
    __CPP_LIB_JTHREAD,
    __CPP_LIB_LATCH,
    __CPP_LIB_LAUNDER,
    __CPP_LIB_LIST_REMOVE_RETURN_TYPE,
    __CPP_LIB_LOGICAL_TRAITS,
    __CPP_LIB_MAKE_FROM_TUPLE,
    __CPP_LIB_MAKE_REVERSE_ITERATOR,
    __CPP_LIB_MAKE_UNIQUE,
    __CPP_LIB_MAP_TRY_EMPLACE,
    __CPP_LIB_MATH_CONSTANTS,
    __CPP_LIB_MATH_SPECIAL_FUNCTIONS,
    __CPP_LIB_MDSPAN,
    __CPP_LIB_MEMORY_RESOURCE,
    __CPP_LIB_MODULES,
    __CPP_LIB_MOVE_ITERATOR_CONCEPT,
    __CPP_LIB_MOVE_ONLY_FUNCTION,
    __CPP_LIB_NODE_EXTRACT,
    __CPP_LIB_NONMEMBER_CONTAINER_ACCESS,
    __CPP_LIB_NOT_FN,
    __CPP_LIB_NULL_ITERATORS,
    __CPP_LIB_OPTIONAL,
    __CPP_LIB_OUT_PTR,
    __CPP_LIB_PARALLEL_ALGORITHM,
    __CPP_LIB_POLYMORPHIC_ALLOCATOR,
    __CPP_LIB_PRINT,
    __CPP_LIB_QUOTED_STRING_IO,
    __CPP_LIB_RANGES,
    __CPP_LIB_RANGES_AS_CONST,
    __CPP_LIB_RANGES_AS_RVALUE,
    __CPP_LIB_RANGES_CARTESIAN_PRODUCT,
    __CPP_LIB_RANGES_CHUNK,
    __CPP_LIB_RANGES_CHUNK_BY,
    __CPP_LIB_RANGES_CONCAT,
    __CPP_LIB_RANGES_CONTAINS,
    __CPP_LIB_RANGES_ENUMERATE,
    __CPP_LIB_RANGES_FIND_LAST,
    __CPP_LIB_RANGES_FOLD,
    __CPP_LIB_RANGES_GENERATE_RANDOM,
    __CPP_LIB_RANGES_IOTA,
    __CPP_LIB_RANGES_JOIN_WITH,
    __CPP_LIB_RANGES_REPEAT,
    __CPP_LIB_RANGES_SLIDE,
    __CPP_LIB_RANGES_STARTS_ENDS_WITH,
    __CPP_LIB_RANGES_STRIDE,
    __CPP_LIB_RANGES_TO_CONTAINER,
    __CPP_LIB_RANGES_ZIP,
    __CPP_LIB_RATIO,
    __CPP_LIB_RAW_MEMORY_ALGORITHMS,
    __CPP_LIB_RCU,
    __CPP_LIB_REFERENCE_FROM_TEMPORARY,
    __CPP_LIB_REFERENCE_WRAPPER,
    __CPP_LIB_REMOVE_CVREF,
    __CPP_LIB_RESULT_OF_SFINAE,
    __CPP_LIB_ROBUST_NONMODIFYING_SEQ_OPS,
    __CPP_LIB_SAMPLE,
    __CPP_LIB_SCOPED_LOCK,
    __CPP_LIB_SEMAPHORE,
    __CPP_LIB_SHARED_MUTEX,
    __CPP_LIB_SHARED_PTR_ARRAYS,
    __CPP_LIB_SHARED_PTR_WEAK_TYPE,
    __CPP_LIB_SHARED_TIMED_MUTEX,
    __CPP_LIB_SHIFT,
    __CPP_LIB_SMART_PTR_FOR_OVERWRITE,
    __CPP_LIB_SMART_PTR_OWNER_EQUALITY,
    __CPP_LIB_SOURCE_LOCATION,
    __CPP_LIB_SPAN,
    __CPP_LIB_SPANSTREAM,
    __CPP_LIB_SSIZE,
    __CPP_LIB_SSTREAM_FROM_STRING_VIEW,
    __CPP_LIB_STACKTRACE,
    __CPP_LIB_START_LIFETIME_AS,
    __CPP_LIB_STARTS_ENDS_WITH,
    __CPP_LIB_STDATOMIC_H,
    __CPP_LIB_STRING_CONTAINS,
    __CPP_LIB_STRING_RESIZE_AND_OVERWRITE,
    __CPP_LIB_STRING_UDLS,
    __CPP_LIB_STRING_VIEW,
    __CPP_LIB_SUBMDSPAN,
    __CPP_LIB_SYNCBUF,
    __CPP_LIB_TEXT_ENCODING,
    __CPP_LIB_THREE_WAY_COMPARISON,
    __CPP_LIB_TO_ADDRESS,
    __CPP_LIB_TO_ARRAY,
    __CPP_LIB_TO_CHARS,
    __CPP_LIB_TO_STRING,
    __CPP_LIB_TO_UNDERLYING,
    __CPP_LIB_TRANSFORMATION_TRAIT_ALIASES,
    __CPP_LIB_TRANSPARENT_OPERATORS,
    __CPP_LIB_TUPLE_ELEMENT_T,
    __CPP_LIB_TUPLE_LIKE,
    __CPP_LIB_TUPLES_BY_TYPE,
    __CPP_LIB_TYPE_IDENTITY,
    __CPP_LIB_TYPE_TRAIT_VARIABLE_TEMPLATES,
    __CPP_LIB_UNCAUGHT_EXCEPTIONS,
    __CPP_LIB_UNORDERED_MAP_TRY_EMPLACE,
    __CPP_LIB_UNREACHABLE,
    __CPP_LIB_UNWRAP_REF,
    __CPP_LIB_VARIANT,
    __CPP_LIB_VOID_T,
    _ATOMIC,
    _IOFB,
    _IOLB,
    _IONB,
    //
    //           A
    //
    ASSERT,
    ATOMIC_BOOL_LOCK_FREE,
    ATOMIC_CHAR_LOCK_FREE,
    ATOMIC_CHAR16_T_LOCK_FREE,
    ATOMIC_CHAR32_T_LOCK_FREE,
    ATOMIC_CHAR8_T_LOCK_FREE,
    ATOMIC_FLAG_INIT,
    ATOMIC_INT_LOCK_FREE,
    ATOMIC_LLONG_LOCK_FREE,
    ATOMIC_LONG_LOCK_FREE,
    ATOMIC_POINTER_LOCK_FREE,
    ATOMIC_SHORT_LOCK_FREE,
    ATOMIC_VAR_INIT,
    ATOMIC_WCHAR_T_LOCK_FREE,
    //
    //           B
    //
    _BUFSIZ,
    //
    //           C
    //
    CHAR_BIT,
    CHAR_MAX,
    CHAR_MIN,
    CLOCKS_PER_SEC,
    //
    //           D
    //
    DBL_DECIMAL_DIG,
    DBL_DIG,
    DBL_EPSILON,
    DBL_HAS_SUBNORM,
    DBL_MANT_DIG,
    DBL_MAX,
    DBL_MAX_10_EXP,
    DBL_MAX_EXP,
    DBL_MIN,
    DBL_MIN_10_EXP,
    DBL_MIN_EXP,
    DBL_TRUE_MIN,
    DECIMAL_DIG,
    //
    //           E
    //
    _E2BIG,
    _EACCES,
    _EADDRINUSE,
    _EADDRNOTAVAIL,
    _EAFNOSUPPORT,
    _EAGAIN,
    _EALREADY,
    _EBADF,
    _EBADMSG,
    _EBUSY,
    _ECANCELED,
    _ECHILD,
    _ECONNABORTED,
    _ECONNREFUSED,
    _ECONNRESET,
    _EDEADLK,
    _EDESTADDRREQ,
    _EDOM,
    _EEXIST,
    _EFAULT,
    _EFBIG,
    _EHOSTUNREACH,
    _EIDRM,
    _EILSEQ,
    _EINPROGRESS,
    _EINTR,
    _EINVAL,
    _EIO,
    _EISCONN,
    _EISDIR,
    _ELOOP,
    _EMFILE,
    _EMLINK,
    _EMSGSIZE,
    _ENAMETOOLONG,
    _ENETDOWN,
    _ENETRESET,
    _ENETUNREACH,
    _ENFILE,
    _ENOBUFS,
    _ENODATA,
    _ENODEV,
    _ENOENT,
    _ENOEXEC,
    _ENOLCK,
    _ENOLINK,
    _ENOMEM,
    _ENOMSG,
    _ENOPROTOOPT,
    _ENOSPC,
    _ENOSR,
    _ENOSTR,
    _ENOSYS,
    _ENOTCONN,
    _ENOTDIR,
    _ENOTEMPTY,
    _ENOTRECOVERABLE,
    _ENOTSOCK,
    _ENOTSUP,
    _ENOTTY,
    _ENXIO,
    _EOF,
    _EOPNOTSUPP,
    _EOVERFLOW,
    _EOWNERDEAD,
    _EPERM,
    _EPIPE,
    _EPROTO,
    _EPROTONOSUPPORT,
    _EPROTOTYPE,
    _ERANGE,
    _EROFS,
    _ERRNO,
    _ESPIPE,
    _ESRCH,
    _ETIME,
    _ETIMEDOUT,
    _ETXTBSY,
    _EWOULDBLOCK,
    _EXDEV,
    _EXIT_FAILURE,
    _EXIT_SUCCESS,
    //
    //           F
    //
    FE_ALL_EXCEPT,
    FE_DFL_ENV,
    FE_DIVBYZERO,
    FE_DOWNWARD,
    FE_INEXACT,
    FE_INVALID,
    FE_OVERFLOW,
    FE_TONEAREST,
    FE_TOWARDZERO,
    FE_UNDERFLOW,
    FE_UPWARD,
    _FILENAME_MAX,
    FLT_DECIMAL_DIG,
    FLT_DIG,
    FLT_EPSILON,
    FLT_EVAL_METHOD,
    FLT_HAS_SUBNORM,
    FLT_MANT_DIG,
    FLT_MAX,
    FLT_MAX_10_EXP,
    FLT_MAX_EXP,
    FLT_MIN,
    FLT_MIN_10_EXP,
    FLT_MIN_EXP,
    FLT_RADIX,
    FLT_ROUNDS,
    FLT_TRUE_MIN,
    _FOPEN_MAX,
    FP_FAST_FMA,
    FP_FAST_FMAF,
    FP_FAST_FMAL,
    FP_ILOGB0,
    FP_ILOGBNAN,
    FP_SUBNORMAL,
    FP_ZERO,
    FP_INFINITE,
    FP_NAN,
    FP_NORMAL,
    //
    //           F
    //
    HUGE_VAL,
    HUGE_VALF,
    HUGE_VALL,
    //
    //           I
    //
    INFINITY,
    INT_FAST16_MAX,
    INT_FAST16_MIN,
    INT_FAST32_MAX,
    INT_FAST32_MIN,
    INT_FAST64_MAX,
    INT_FAST64_MIN,
    INT_FAST8_MAX,
    INT_FAST8_MIN,
    INT_LEAST16_MAX,
    INT_LEAST16_MIN,
    INT_LEAST32_MAX,
    INT_LEAST32_MIN,
    INT_LEAST64_MAX,
    INT_LEAST64_MIN,
    INT_LEAST8_MAX,
    INT_LEAST8_MIN,
    INT_MAX,
    INT_MIN,
    INT16_C,
    INT16_MAX,
    INT16_MIN,
    INT32_C,
    INT32_MAX,
    INT32_MIN,
    INT64_C,
    INT64_MAX,
    INT64_MIN,
    INT8_C,
    INT8_MAX,
    INT8_MIN,
    INTMAX_C,
    INTMAX_MAX,
    INTMAX_MIN,
    INTPTR_MAX,
    INTPTR_MIN,
    //
    //           L
    //
    L_TMPNAM,
    _LC_ALL,
    _LC_COLLATE,
    _LC_CTYPE,
    _LC_MONETARY,
    _LC_NUMERIC,
    _LC_TIME,
    LDBL_DECIMAL_DIG,
    LDBL_DIG,
    LDBL_EPSILON,
    LDBL_HAS_SUBNORM,
    LDBL_MANT_DIG,
    LDBL_MAX,
    LDBL_MAX_10_EXP,
    LDBL_MAX_EXP,
    LDBL_MIN,
    LDBL_MIN_10_EXP,
    LDBL_MIN_EXP,
    LDBL_TRUE_MIN,
    LLONG_MAX,
    LLONG_MIN,
    LONG_MAX,
    LONG_MIN,
    //
    //           M
    //
    MATH_ERREXCEPT,
    MATH_ERRHANDLING,
    MATH_ERRNO,
    _MB_CUR_MAX,
    MB_LEN_MAX,
    //
    //           N
    //
    NAN,
    _NULL,
    //
    //           O
    //
    OFFSETOF,
    ONCE_FLAG_INIT,
    //
    //           P
    //
    PRID16,
    PRID32,
    PRID64,
    PRID8,
    PRIDFAST16,
    PRIDFAST32,
    PRIDFAST64,
    PRIDFAST8,
    PRIDLEAST16,
    PRIDLEAST32,
    PRIDLEAST64,
    PRIDLEAST8,
    PRIDMAX,
    PRIDPTR,
    PRII16,
    PRII32,
    PRII64,
    PRII8,
    PRIIFAST16,
    PRIIFAST32,
    PRIIFAST64,
    PRIIFAST8,
    PRIILEAST16,
    PRIILEAST32,
    PRIILEAST64,
    PRIILEAST8,
    PRIIMAX,
    PRIIPTR,
    PRIO16,
    PRIO32,
    PRIO64,
    PRIO8,
    PRIOFAST16,
    PRIOFAST32,
    PRIOFAST64,
    PRIOFAST8,
    PRIOLEAST16,
    PRIOLEAST32,
    PRIOLEAST64,
    PRIOLEAST8,
    PRIOMAX,
    PRIOPTR,
    PRIU16,
    PRIU32,
    PRIU64,
    PRIU8,
    PRIUFAST16,
    PRIUFAST32,
    PRIUFAST64,
    PRIUFAST8,
    PRIULEAST16,
    PRIULEAST32,
    PRIULEAST64,
    PRIULEAST8,
    PRIUMAX,
    PRIUPTR,
    PRIX16,
    _PRIX16, // Underscore due to conflict with PRIX16
    PRIX32,
    _PRIX32, // Underscore due to conflict with PRIX32
    PRIX64,
    _PRIX64, // Underscore due to conflict with PRIX64
    PRIX8,
    _PRIX8, // Underscore due to conflict with PRIX8
    PRIXFAST16,
    _PRIXFAST16, // Underscore due to conflict with PRIXFAST16
    PRIXFAST32,
    _PRIXFAST32, // Underscore due to conflict with PRIXFAST32
    PRIXFAST64,
    _PRIXFAST64, // Underscore due to conflict with PRIXFAST64
    PRIXFAST8,
    _PRIXFAST8, // Underscore due to conflict with PRIXFAST8
    PRIXLEAST16,
    _PRIXLEAST16, // Underscore due to conflict with PRIXLEAST16
    PRIXLEAST32,
    _PRIXLEAST32, // Underscore due to conflict with PRIXLEAST32
    PRIXLEAST64,
    _PRIXLEAST64, // Underscore due to conflict with PRIXLEAST64
    PRIXLEAST8,
    _PRIXLEAST8, // Underscore due to conflict with PRIXLEAST8
    PRIXMAX,
    _PRIXMAX, // Underscore due to conflict with PRIXMAX
    PRIXPTR,
    _PRIXPTR, // Underscore due to conflict with PRIXPTR
    PTRDIFF_MAX,
    PTRDIFF_MIN,
    //
    //           R
    //
    _RAND_MAX,
    //
    //           S
    //
    SCHAR_MAX,
    SCHAR_MIN,
    SCND16,
    SCND32,
    SCND64,
    SCND8,
    SCNDFAST16,
    SCNDFAST32,
    SCNDFAST64,
    SCNDFAST8,
    SCNDLEAST16,
    SCNDLEAST32,
    SCNDLEAST64,
    SCNDLEAST8,
    SCNDMAX,
    SCNDPTR,
    SCNI16,
    SCNI32,
    SCNI64,
    SCNI8,
    SCNIFAST16,
    SCNIFAST32,
    SCNIFAST64,
    SCNIFAST8,
    SCNILEAST16,
    SCNILEAST32,
    SCNILEAST64,
    SCNILEAST8,
    SCNIMAX,
    SCNIPTR,
    SCNO16,
    SCNO32,
    SCNO64,
    SCNO8,
    SCNOFAST16,
    SCNOFAST32,
    SCNOFAST64,
    SCNOFAST8,
    SCNOLEAST16,
    SCNOLEAST32,
    SCNOLEAST64,
    SCNOLEAST8,
    SCNOMAX,
    SCNOPTR,
    SCNU16,
    SCNU32,
    SCNU64,
    SCNU8,
    SCNUFAST16,
    SCNUFAST32,
    SCNUFAST64,
    SCNUFAST8,
    SCNULEAST16,
    SCNULEAST32,
    SCNULEAST64,
    SCNULEAST8,
    SCNUMAX,
    SCNUPTR,
    SCNX16,
    SCNX32,
    SCNX64,
    SCNX8,
    SCNXFAST16,
    SCNXFAST32,
    SCNXFAST64,
    SCNXFAST8,
    SCNXLEAST16,
    SCNXLEAST32,
    SCNXLEAST64,
    SCNXLEAST8,
    SCNXMAX,
    SCNXPTR,
    _SEEK_CUR,
    _SEEK_END,
    _SEEK_SET,
    SETJMP,
    SHRT_MAX,
    SHRT_MIN,
    SIG_ATOMIC_MAX,
    SIG_ATOMIC_MIN,
    SIG_DFL,
    SIG_ERR,
    SIG_IGN,
    SIGABRT,
    SIGFPE,
    SIGILL,
    SIGINT,
    SIGSEGV,
    SIGTERM,
    SIZE_MAX,
    STDERR,
    STDIN,
    STDOUT,
    //
    //           T
    //
    TIME_UTC,
    _TMP_MAX,
    //
    //           U
    //
    UCHAR_MAX,
    UINT_FAST16_MAX,
    UINT_FAST32_MAX,
    UINT_FAST64_MAX,
    UINT_FAST8_MAX,
    UINT_LEAST16_MAX,
    UINT_LEAST32_MAX,
    UINT_LEAST64_MAX,
    UINT_LEAST8_MAX,
    UINT_MAX,
    UINT16_C,
    UINT16_MAX,
    UINT32_C,
    UINT32_MAX,
    UINT64_MAX,
    UINT64_C,
    UINT8_C,
    UINT8_MAX,
    UINTMAX_C,
    UINTMAX_MAX,
    UINTPTR_MAX,
    ULLONG_MAX,
    ULONG_MAX,
    USHRT_MAX,
    //
    //           V
    //
    VA_ARG,
    VA_COPY,
    VA_END,
    VA_START,
    //
    //           W
    //
    _WCHAR_MAX,
    _WCHAR_MIN,
    _WEOF,
    WINT_MAX,
    WINT_MIN,
    //
    //           Custom error return
    //
    ERROR,
};

MacroTokenKind GetMacroTokenKind(const std::string tok_name) {
    if (tok_name == "__ALIGNAS_IS_DEFINED") return MacroTokenKind::__ALIGNAS_IS_DEFINED;
    if (tok_name == "__bool_true_false_are_defined") return MacroTokenKind::__BOOL_TRUE_FALSE_ARE_DEFINED;
    if (tok_name == "__cpp_lib_adaptor_iterator_pair_constructor") return MacroTokenKind::__CPP_LIB_ADAPTOR_ITERATOR_PAIR_CONSTRUCTOR;
    if (tok_name == "__cpp_lib_addressof_constexpr") return MacroTokenKind::__CPP_LIB_ADDRESSOF_CONSTEXPR;
    if (tok_name == "__cpp_lib_algorithm_default_value_type") return MacroTokenKind::__CPP_LIB_ALGORITHM_DEFAULT_VALUE_TYPE;
    if (tok_name == "__cpp_lib_algorithm_iterator_requirements") return MacroTokenKind::__CPP_LIB_ALGORITHM_ITERATOR_REQUIREMENTS;
    if (tok_name == "__cpp_lib_allocate_at_least") return MacroTokenKind::__CPP_LIB_ALLOCATE_AT_LEAST;
    if (tok_name == "__cpp_lib_allocator_traits_is_always_equal") return MacroTokenKind::__CPP_LIB_ALLOCATOR_TRAITS_IS_ALWAYS_EQUAL;
    if (tok_name == "__cpp_lib_any") return MacroTokenKind::__CPP_LIB_ANY;
    if (tok_name == "__cpp_lib_apply") return MacroTokenKind::__CPP_LIB_APPLY;
    if (tok_name == "__cpp_lib_array_constexpr") return MacroTokenKind::__CPP_LIB_ARRAY_CONSTEXPR;
    if (tok_name == "__cpp_lib_as_const") return MacroTokenKind::__CPP_LIB_AS_CONST;
    if (tok_name == "__cpp_lib_associative_heterogeneous_erasure") return MacroTokenKind::__CPP_LIB_ASSOCIATIVE_HETEROGENEOUS_ERASURE;
    if (tok_name == "__cpp_lib_associative_heterogeneous_insertion") return MacroTokenKind::__CPP_LIB_ASSOCIATIVE_HETEROGENEOUS_INSERTION;
    if (tok_name == "__cpp_lib_assume_aligned") return MacroTokenKind::__CPP_LIB_ASSUME_ALIGNED;
    if (tok_name == "__cpp_lib_atomic_flag_test") return MacroTokenKind::__CPP_LIB_ATOMIC_FLAG_TEST;
    if (tok_name == "__cpp_lib_atomic_float") return MacroTokenKind::__CPP_LIB_ATOMIC_FLOAT;
    if (tok_name == "__cpp_lib_atomic_is_always_lock_free") return MacroTokenKind::__CPP_LIB_ATOMIC_IS_ALWAYS_LOCK_FREE;
    if (tok_name == "__cpp_lib_atomic_lock_free_type_aliases") return MacroTokenKind::__CPP_LIB_ATOMIC_LOCK_FREE_TYPE_ALIASES;
    if (tok_name == "__cpp_lib_atomic_min_max") return MacroTokenKind::__CPP_LIB_ATOMIC_MIN_MAX;
    if (tok_name == "__cpp_lib_atomic_ref") return MacroTokenKind::__CPP_LIB_ATOMIC_REF;
    if (tok_name == "__cpp_lib_atomic_shared_ptr") return MacroTokenKind::__CPP_LIB_ATOMIC_SHARED_PTR;
    if (tok_name == "__cpp_lib_atomic_value_initialization") return MacroTokenKind::__CPP_LIB_ATOMIC_VALUE_INITIALIZATION;
    if (tok_name == "__cpp_lib_atomic_wait") return MacroTokenKind::__CPP_LIB_ATOMIC_WAIT;
    if (tok_name == "__cpp_lib_barrier") return MacroTokenKind::__CPP_LIB_BARRIER;
    if (tok_name == "__cpp_lib_bind_back") return MacroTokenKind::__CPP_LIB_BIND_BACK;
    if (tok_name == "__cpp_lib_bind_front") return MacroTokenKind::__CPP_LIB_BIND_FRONT;
    if (tok_name == "__cpp_lib_bit_cast") return MacroTokenKind::__CPP_LIB_BIT_CAST;
    if (tok_name == "__cpp_lib_bitops") return MacroTokenKind::__CPP_LIB_BITOPS;
    if (tok_name == "__cpp_lib_bitset") return MacroTokenKind::__CPP_LIB_BITSET;
    if (tok_name == "__cpp_lib_bool_constant") return MacroTokenKind::__CPP_LIB_BOOL_CONSTANT;
    if (tok_name == "__cpp_lib_bounded_array_traits") return MacroTokenKind::__CPP_LIB_BOUNDED_ARRAY_TRAITS;
    if (tok_name == "__cpp_lib_boyer_moore_searcher") return MacroTokenKind::__CPP_LIB_BOYER_MOORE_SEARCHER;
    if (tok_name == "__cpp_lib_byte") return MacroTokenKind::__CPP_LIB_BYTE;
    if (tok_name == "__cpp_lib_byteswap") return MacroTokenKind::__CPP_LIB_BYTESWAP;
    if (tok_name == "__cpp_lib_char8_t") return MacroTokenKind::__CPP_LIB_CHAR8_T;
    if (tok_name == "__cpp_lib_chrono") return MacroTokenKind::__CPP_LIB_CHRONO;
    if (tok_name == "__cpp_lib_chrono_udls") return MacroTokenKind::__CPP_LIB_CHRONO_UDLS;
    if (tok_name == "__cpp_lib_clamp") return MacroTokenKind::__CPP_LIB_CLAMP;
    if (tok_name == "__cpp_lib_common_reference") return MacroTokenKind::__CPP_LIB_COMMON_REFERENCE;
    if (tok_name == "__cpp_lib_common_reference_wrapper") return MacroTokenKind::__CPP_LIB_COMMON_REFERENCE_WRAPPER;
    if (tok_name == "__cpp_lib_complex_udls") return MacroTokenKind::__CPP_LIB_COMPLEX_UDLS;
    if (tok_name == "__cpp_lib_concepts") return MacroTokenKind::__CPP_LIB_CONCEPTS;
    if (tok_name == "__cpp_lib_constexpr_algorithms") return MacroTokenKind::__CPP_LIB_CONSTEXPR_ALGORITHMS;
    if (tok_name == "__cpp_lib_constexpr_bitset") return MacroTokenKind::__CPP_LIB_CONSTEXPR_BITSET;
    if (tok_name == "__cpp_lib_constexpr_charconv") return MacroTokenKind::__CPP_LIB_CONSTEXPR_CHARCONV;
    if (tok_name == "__cpp_lib_constexpr_cmath") return MacroTokenKind::__CPP_LIB_CONSTEXPR_CMATH;
    if (tok_name == "__cpp_lib_constexpr_complex") return MacroTokenKind::__CPP_LIB_CONSTEXPR_COMPLEX;
    if (tok_name == "__cpp_lib_constexpr_dynamic_alloc") return MacroTokenKind::__CPP_LIB_CONSTEXPR_DYNAMIC_ALLOC;
    if (tok_name == "__cpp_lib_constexpr_functional") return MacroTokenKind::__CPP_LIB_CONSTEXPR_FUNCTIONAL;
    if (tok_name == "__cpp_lib_constexpr_iterator") return MacroTokenKind::__CPP_LIB_CONSTEXPR_ITERATOR;
    if (tok_name == "__cpp_lib_constexpr_memory") return MacroTokenKind::__CPP_LIB_CONSTEXPR_MEMORY;
    if (tok_name == "__cpp_lib_constexpr_numeric") return MacroTokenKind::__CPP_LIB_CONSTEXPR_NUMERIC;
    if (tok_name == "__cpp_lib_constexpr_string") return MacroTokenKind::__CPP_LIB_CONSTEXPR_STRING;
    if (tok_name == "__cpp_lib_constexpr_string_view") return MacroTokenKind::__CPP_LIB_CONSTEXPR_STRING_VIEW;
    if (tok_name == "__cpp_lib_constexpr_tuple") return MacroTokenKind::__CPP_LIB_CONSTEXPR_TUPLE;
    if (tok_name == "__cpp_lib_constexpr_typeinfo") return MacroTokenKind::__CPP_LIB_CONSTEXPR_TYPEINFO;
    if (tok_name == "__cpp_lib_constexpr_utility") return MacroTokenKind::__CPP_LIB_CONSTEXPR_UTILITY;
    if (tok_name == "__cpp_lib_constexpr_vector") return MacroTokenKind::__CPP_LIB_CONSTEXPR_VECTOR;
    if (tok_name == "__cpp_lib_constrained_equality") return MacroTokenKind::__CPP_LIB_CONSTRAINED_EQUALITY;
    if (tok_name == "__cpp_lib_containers_ranges") return MacroTokenKind::__CPP_LIB_CONTAINERS_RANGES;
    if (tok_name == "__cpp_lib_copyable_function") return MacroTokenKind::__CPP_LIB_COPYABLE_FUNCTION;
    if (tok_name == "__cpp_lib_coroutine") return MacroTokenKind::__CPP_LIB_COROUTINE;
    if (tok_name == "__cpp_lib_debugging") return MacroTokenKind::__CPP_LIB_DEBUGGING;
    if (tok_name == "__cpp_lib_destroying_delete") return MacroTokenKind::__CPP_LIB_DESTROYING_DELETE;
    if (tok_name == "__cpp_lib_enable_shared_from_this") return MacroTokenKind::__CPP_LIB_ENABLE_SHARED_FROM_THIS;
    if (tok_name == "__cpp_lib_endian") return MacroTokenKind::__CPP_LIB_ENDIAN;
    if (tok_name == "__cpp_lib_erase_if") return MacroTokenKind::__CPP_LIB_ERASE_IF;
    if (tok_name == "__cpp_lib_exchange_function") return MacroTokenKind::__CPP_LIB_EXCHANGE_FUNCTION;
    if (tok_name == "__cpp_lib_execution") return MacroTokenKind::__CPP_LIB_EXECUTION;
    if (tok_name == "__cpp_lib_expected") return MacroTokenKind::__CPP_LIB_EXPECTED;
    if (tok_name == "__cpp_lib_filesystem") return MacroTokenKind::__CPP_LIB_FILESYSTEM;
    if (tok_name == "__cpp_lib_flat_map") return MacroTokenKind::__CPP_LIB_FLAT_MAP;
    if (tok_name == "__cpp_lib_flat_set") return MacroTokenKind::__CPP_LIB_FLAT_SET;
    if (tok_name == "__cpp_lib_format") return MacroTokenKind::__CPP_LIB_FORMAT;
    if (tok_name == "__cpp_lib_format_path") return MacroTokenKind::__CPP_LIB_FORMAT_PATH;
    if (tok_name == "__cpp_lib_format_ranges") return MacroTokenKind::__CPP_LIB_FORMAT_RANGES;
    if (tok_name == "__cpp_lib_formatters") return MacroTokenKind::__CPP_LIB_FORMATTERS;
    if (tok_name == "__cpp_lib_forward_like") return MacroTokenKind::__CPP_LIB_FORWARD_LIKE;
    if (tok_name == "__cpp_lib_freestanding_char_traits") return MacroTokenKind::__CPP_LIB_FREESTANDING_CHAR_TRAITS;
    if (tok_name == "__cpp_lib_freestanding_charconv") return MacroTokenKind::__CPP_LIB_FREESTANDING_CHARCONV;
    if (tok_name == "__cpp_lib_freestanding_cstdlib") return MacroTokenKind::__CPP_LIB_FREESTANDING_CSTDLIB;
    if (tok_name == "__cpp_lib_freestanding_cstring") return MacroTokenKind::__CPP_LIB_FREESTANDING_CSTRING;
    if (tok_name == "__cpp_lib_freestanding_cwchar") return MacroTokenKind::__CPP_LIB_FREESTANDING_CWCHAR;
    if (tok_name == "__cpp_lib_freestanding_errc") return MacroTokenKind::__CPP_LIB_FREESTANDING_ERRC;
    if (tok_name == "__cpp_lib_freestanding_feature_test_macros") return MacroTokenKind::__CPP_LIB_FREESTANDING_FEATURE_TEST_MACROS;
    if (tok_name == "__cpp_lib_freestanding_functional") return MacroTokenKind::__CPP_LIB_FREESTANDING_FUNCTIONAL;
    if (tok_name == "__cpp_lib_freestanding_iterator") return MacroTokenKind::__CPP_LIB_FREESTANDING_ITERATOR;
    if (tok_name == "__cpp_lib_freestanding_memory") return MacroTokenKind::__CPP_LIB_FREESTANDING_MEMORY;
    if (tok_name == "__cpp_lib_freestanding_operator_new") return MacroTokenKind::__CPP_LIB_FREESTANDING_OPERATOR_NEW;
    if (tok_name == "__cpp_lib_freestanding_ranges") return MacroTokenKind::__CPP_LIB_FREESTANDING_RANGES;
    if (tok_name == "__cpp_lib_freestanding_ratio") return MacroTokenKind::__CPP_LIB_FREESTANDING_RATIO;
    if (tok_name == "__cpp_lib_freestanding_tuple") return MacroTokenKind::__CPP_LIB_FREESTANDING_TUPLE;
    if (tok_name == "__cpp_lib_freestanding_utility") return MacroTokenKind::__CPP_LIB_FREESTANDING_UTILITY;
    if (tok_name == "__cpp_lib_fstream_native_handle") return MacroTokenKind::__CPP_LIB_FSTREAM_NATIVE_HANDLE;
    if (tok_name == "__cpp_lib_function_ref") return MacroTokenKind::__CPP_LIB_FUNCTION_REF;
    if (tok_name == "__cpp_lib_gcd_lcm") return MacroTokenKind::__CPP_LIB_GCD_LCM;
    if (tok_name == "__cpp_lib_generator") return MacroTokenKind::__CPP_LIB_GENERATOR;
    if (tok_name == "__cpp_lib_generic_associative_lookup") return MacroTokenKind::__CPP_LIB_GENERIC_ASSOCIATIVE_LOOKUP;
    if (tok_name == "__cpp_lib_generic_unordered_lookup") return MacroTokenKind::__CPP_LIB_GENERIC_UNORDERED_LOOKUP;
    if (tok_name == "__cpp_lib_hardware_interference_size") return MacroTokenKind::__CPP_LIB_HARDWARE_INTERFERENCE_SIZE;
    if (tok_name == "__cpp_lib_has_unique_object_representations") return MacroTokenKind::__CPP_LIB_HAS_UNIQUE_OBJECT_REPRESENTATIONS;
    if (tok_name == "__cpp_lib_hazard_pointer") return MacroTokenKind::__CPP_LIB_HAZARD_POINTER;
    if (tok_name == "__cpp_lib_hypot") return MacroTokenKind::__CPP_LIB_HYPOT;
    if (tok_name == "__cpp_lib_incomplete_container_elements") return MacroTokenKind::__CPP_LIB_INCOMPLETE_CONTAINER_ELEMENTS;
    if (tok_name == "__cpp_lib_int_pow2") return MacroTokenKind::__CPP_LIB_INT_POW2;
    if (tok_name == "__cpp_lib_integer_comparison_functions") return MacroTokenKind::__CPP_LIB_INTEGER_COMPARISON_FUNCTIONS;
    if (tok_name == "__cpp_lib_integer_sequence") return MacroTokenKind::__CPP_LIB_INTEGER_SEQUENCE;
    if (tok_name == "__cpp_lib_integral_constant_callable") return MacroTokenKind::__CPP_LIB_INTEGRAL_CONSTANT_CALLABLE;
    if (tok_name == "__cpp_lib_interpolate") return MacroTokenKind::__CPP_LIB_INTERPOLATE;
    if (tok_name == "__cpp_lib_invoke") return MacroTokenKind::__CPP_LIB_INVOKE;
    if (tok_name == "__cpp_lib_invoke_r") return MacroTokenKind::__CPP_LIB_INVOKE_R;
    if (tok_name == "__cpp_lib_ios_noreplace") return MacroTokenKind::__CPP_LIB_IOS_NOREPLACE;
    if (tok_name == "__cpp_lib_is_aggregate") return MacroTokenKind::__CPP_LIB_IS_AGGREGATE;
    if (tok_name == "__cpp_lib_is_constant_evaluated") return MacroTokenKind::__CPP_LIB_IS_CONSTANT_EVALUATED;
    if (tok_name == "__cpp_lib_is_final") return MacroTokenKind::__CPP_LIB_IS_FINAL;
    if (tok_name == "__cpp_lib_is_implicit_lifetime") return MacroTokenKind::__CPP_LIB_IS_IMPLICIT_LIFETIME;
    if (tok_name == "__cpp_lib_is_invocable") return MacroTokenKind::__CPP_LIB_IS_INVOCABLE;
    if (tok_name == "__cpp_lib_is_layout_compatible") return MacroTokenKind::__CPP_LIB_IS_LAYOUT_COMPATIBLE;
    if (tok_name == "__cpp_lib_is_nothrow_convertible") return MacroTokenKind::__CPP_LIB_IS_NOTHROW_CONVERTIBLE;
    if (tok_name == "__cpp_lib_is_null_pointer") return MacroTokenKind::__CPP_LIB_IS_NULL_POINTER;
    if (tok_name == "__cpp_lib_is_pointer_interconvertible") return MacroTokenKind::__CPP_LIB_IS_POINTER_INTERCONVERTIBLE;
    if (tok_name == "__cpp_lib_is_scoped_enum") return MacroTokenKind::__CPP_LIB_IS_SCOPED_ENUM;
    if (tok_name == "__cpp_lib_is_swappable") return MacroTokenKind::__CPP_LIB_IS_SWAPPABLE;
    if (tok_name == "__cpp_lib_is_within_lifetime") return MacroTokenKind::__CPP_LIB_IS_WITHIN_LIFETIME;
    if (tok_name == "__cpp_lib_jthread") return MacroTokenKind::__CPP_LIB_JTHREAD;
    if (tok_name == "__cpp_lib_latch") return MacroTokenKind::__CPP_LIB_LATCH;
    if (tok_name == "__cpp_lib_launder") return MacroTokenKind::__CPP_LIB_LAUNDER;
    if (tok_name == "__cpp_lib_list_remove_return_type") return MacroTokenKind::__CPP_LIB_LIST_REMOVE_RETURN_TYPE;
    if (tok_name == "__cpp_lib_logical_traits") return MacroTokenKind::__CPP_LIB_LOGICAL_TRAITS;
    if (tok_name == "__cpp_lib_make_from_tuple") return MacroTokenKind::__CPP_LIB_MAKE_FROM_TUPLE;
    if (tok_name == "__cpp_lib_make_reverse_iterator") return MacroTokenKind::__CPP_LIB_MAKE_REVERSE_ITERATOR;
    if (tok_name == "__cpp_lib_make_unique") return MacroTokenKind::__CPP_LIB_MAKE_UNIQUE;
    if (tok_name == "__cpp_lib_map_try_emplace") return MacroTokenKind::__CPP_LIB_MAP_TRY_EMPLACE;
    if (tok_name == "__cpp_lib_math_constants") return MacroTokenKind::__CPP_LIB_MATH_CONSTANTS;
    if (tok_name == "__cpp_lib_math_special_functions") return MacroTokenKind::__CPP_LIB_MATH_SPECIAL_FUNCTIONS;
    if (tok_name == "__cpp_lib_mdspan") return MacroTokenKind::__CPP_LIB_MDSPAN;
    if (tok_name == "__cpp_lib_memory_resource") return MacroTokenKind::__CPP_LIB_MEMORY_RESOURCE;
    if (tok_name == "__cpp_lib_modules") return MacroTokenKind::__CPP_LIB_MODULES;
    if (tok_name == "__cpp_lib_move_iterator_concept") return MacroTokenKind::__CPP_LIB_MOVE_ITERATOR_CONCEPT;
    if (tok_name == "__cpp_lib_move_only_function") return MacroTokenKind::__CPP_LIB_MOVE_ONLY_FUNCTION;
    if (tok_name == "__cpp_lib_node_extract") return MacroTokenKind::__CPP_LIB_NODE_EXTRACT;
    if (tok_name == "__cpp_lib_nonmember_container_access") return MacroTokenKind::__CPP_LIB_NONMEMBER_CONTAINER_ACCESS;
    if (tok_name == "__cpp_lib_not_fn") return MacroTokenKind::__CPP_LIB_NOT_FN;
    if (tok_name == "__cpp_lib_null_iterators") return MacroTokenKind::__CPP_LIB_NULL_ITERATORS;
    if (tok_name == "__cpp_lib_optional") return MacroTokenKind::__CPP_LIB_OPTIONAL;
    if (tok_name == "__cpp_lib_out_ptr") return MacroTokenKind::__CPP_LIB_OUT_PTR;
    if (tok_name == "__cpp_lib_parallel_algorithm") return MacroTokenKind::__CPP_LIB_PARALLEL_ALGORITHM;
    if (tok_name == "__cpp_lib_polymorphic_allocator") return MacroTokenKind::__CPP_LIB_POLYMORPHIC_ALLOCATOR;
    if (tok_name == "__cpp_lib_print") return MacroTokenKind::__CPP_LIB_PRINT;
    if (tok_name == "__cpp_lib_quoted_string_io") return MacroTokenKind::__CPP_LIB_QUOTED_STRING_IO;
    if (tok_name == "__cpp_lib_ranges") return MacroTokenKind::__CPP_LIB_RANGES;
    if (tok_name == "__cpp_lib_ranges_as_const") return MacroTokenKind::__CPP_LIB_RANGES_AS_CONST;
    if (tok_name == "__cpp_lib_ranges_as_rvalue") return MacroTokenKind::__CPP_LIB_RANGES_AS_RVALUE;
    if (tok_name == "__cpp_lib_ranges_cartesian_product") return MacroTokenKind::__CPP_LIB_RANGES_CARTESIAN_PRODUCT;
    if (tok_name == "__cpp_lib_ranges_chunk") return MacroTokenKind::__CPP_LIB_RANGES_CHUNK;
    if (tok_name == "__cpp_lib_ranges_chunk_by") return MacroTokenKind::__CPP_LIB_RANGES_CHUNK_BY;
    if (tok_name == "__cpp_lib_ranges_concat") return MacroTokenKind::__CPP_LIB_RANGES_CONCAT;
    if (tok_name == "__cpp_lib_ranges_contains") return MacroTokenKind::__CPP_LIB_RANGES_CONTAINS;
    if (tok_name == "__cpp_lib_ranges_enumerate") return MacroTokenKind::__CPP_LIB_RANGES_ENUMERATE;
    if (tok_name == "__cpp_lib_ranges_find_last") return MacroTokenKind::__CPP_LIB_RANGES_FIND_LAST;
    if (tok_name == "__cpp_lib_ranges_fold") return MacroTokenKind::__CPP_LIB_RANGES_FOLD;
    if (tok_name == "__cpp_lib_ranges_generate_random") return MacroTokenKind::__CPP_LIB_RANGES_GENERATE_RANDOM;
    if (tok_name == "__cpp_lib_ranges_iota") return MacroTokenKind::__CPP_LIB_RANGES_IOTA;
    if (tok_name == "__cpp_lib_ranges_join_with") return MacroTokenKind::__CPP_LIB_RANGES_JOIN_WITH;
    if (tok_name == "__cpp_lib_ranges_repeat") return MacroTokenKind::__CPP_LIB_RANGES_REPEAT;
    if (tok_name == "__cpp_lib_ranges_slide") return MacroTokenKind::__CPP_LIB_RANGES_SLIDE;
    if (tok_name == "__cpp_lib_ranges_starts_ends_with") return MacroTokenKind::__CPP_LIB_RANGES_STARTS_ENDS_WITH;
    if (tok_name == "__cpp_lib_ranges_stride") return MacroTokenKind::__CPP_LIB_RANGES_STRIDE;
    if (tok_name == "__cpp_lib_ranges_to_container") return MacroTokenKind::__CPP_LIB_RANGES_TO_CONTAINER;
    if (tok_name == "__cpp_lib_ranges_zip") return MacroTokenKind::__CPP_LIB_RANGES_ZIP;
    if (tok_name == "__cpp_lib_ratio") return MacroTokenKind::__CPP_LIB_RATIO;
    if (tok_name == "__cpp_lib_raw_memory_algorithms") return MacroTokenKind::__CPP_LIB_RAW_MEMORY_ALGORITHMS;
    if (tok_name == "__cpp_lib_rcu") return MacroTokenKind::__CPP_LIB_RCU;
    if (tok_name == "__cpp_lib_reference_from_temporary") return MacroTokenKind::__CPP_LIB_REFERENCE_FROM_TEMPORARY;
    if (tok_name == "__cpp_lib_reference_wrapper") return MacroTokenKind::__CPP_LIB_REFERENCE_WRAPPER;
    if (tok_name == "__cpp_lib_remove_cvref") return MacroTokenKind::__CPP_LIB_REMOVE_CVREF;
    if (tok_name == "__cpp_lib_result_of_sfinae") return MacroTokenKind::__CPP_LIB_RESULT_OF_SFINAE;
    if (tok_name == "__cpp_lib_robust_nonmodifying_seq_ops") return MacroTokenKind::__CPP_LIB_ROBUST_NONMODIFYING_SEQ_OPS;
    if (tok_name == "__cpp_lib_sample") return MacroTokenKind::__CPP_LIB_SAMPLE;
    if (tok_name == "__cpp_lib_scoped_lock") return MacroTokenKind::__CPP_LIB_SCOPED_LOCK;
    if (tok_name == "__cpp_lib_semaphore") return MacroTokenKind::__CPP_LIB_SEMAPHORE;
    if (tok_name == "__cpp_lib_shared_mutex") return MacroTokenKind::__CPP_LIB_SHARED_MUTEX;
    if (tok_name == "__cpp_lib_shared_ptr_arrays") return MacroTokenKind::__CPP_LIB_SHARED_PTR_ARRAYS;
    if (tok_name == "__cpp_lib_shared_ptr_weak_type") return MacroTokenKind::__CPP_LIB_SHARED_PTR_WEAK_TYPE;
    if (tok_name == "__cpp_lib_shared_timed_mutex") return MacroTokenKind::__CPP_LIB_SHARED_TIMED_MUTEX;
    if (tok_name == "__cpp_lib_shift") return MacroTokenKind::__CPP_LIB_SHIFT;
    if (tok_name == "__cpp_lib_smart_ptr_for_overwrite") return MacroTokenKind::__CPP_LIB_SMART_PTR_FOR_OVERWRITE;
    if (tok_name == "__cpp_lib_smart_ptr_owner_equality") return MacroTokenKind::__CPP_LIB_SMART_PTR_OWNER_EQUALITY;
    if (tok_name == "__cpp_lib_source_location") return MacroTokenKind::__CPP_LIB_SOURCE_LOCATION;
    if (tok_name == "__cpp_lib_span") return MacroTokenKind::__CPP_LIB_SPAN;
    if (tok_name == "__cpp_lib_spanstream") return MacroTokenKind::__CPP_LIB_SPANSTREAM;
    if (tok_name == "__cpp_lib_ssize") return MacroTokenKind::__CPP_LIB_SSIZE;
    if (tok_name == "__cpp_lib_sstream_from_string_view") return MacroTokenKind::__CPP_LIB_SSTREAM_FROM_STRING_VIEW;
    if (tok_name == "__cpp_lib_stacktrace") return MacroTokenKind::__CPP_LIB_STACKTRACE;
    if (tok_name == "__cpp_lib_start_lifetime_as") return MacroTokenKind::__CPP_LIB_START_LIFETIME_AS;
    if (tok_name == "__cpp_lib_starts_ends_with") return MacroTokenKind::__CPP_LIB_STARTS_ENDS_WITH;
    if (tok_name == "__cpp_lib_stdatomic_h") return MacroTokenKind::__CPP_LIB_STDATOMIC_H;
    if (tok_name == "__cpp_lib_string_contains") return MacroTokenKind::__CPP_LIB_STRING_CONTAINS;
    if (tok_name == "__cpp_lib_string_resize_and_overwrite") return MacroTokenKind::__CPP_LIB_STRING_RESIZE_AND_OVERWRITE;
    if (tok_name == "__cpp_lib_string_udls") return MacroTokenKind::__CPP_LIB_STRING_UDLS;
    if (tok_name == "__cpp_lib_string_view") return MacroTokenKind::__CPP_LIB_STRING_VIEW;
    if (tok_name == "__cpp_lib_submdspan") return MacroTokenKind::__CPP_LIB_SUBMDSPAN;
    if (tok_name == "__cpp_lib_syncbuf") return MacroTokenKind::__CPP_LIB_SYNCBUF;
    if (tok_name == "__cpp_lib_text_encoding") return MacroTokenKind::__CPP_LIB_TEXT_ENCODING;
    if (tok_name == "__cpp_lib_three_way_comparison") return MacroTokenKind::__CPP_LIB_THREE_WAY_COMPARISON;
    if (tok_name == "__cpp_lib_to_address") return MacroTokenKind::__CPP_LIB_TO_ADDRESS;
    if (tok_name == "__cpp_lib_to_array") return MacroTokenKind::__CPP_LIB_TO_ARRAY;
    if (tok_name == "__cpp_lib_to_chars") return MacroTokenKind::__CPP_LIB_TO_CHARS;
    if (tok_name == "__cpp_lib_to_string") return MacroTokenKind::__CPP_LIB_TO_STRING;
    if (tok_name == "__cpp_lib_to_underlying") return MacroTokenKind::__CPP_LIB_TO_UNDERLYING;
    if (tok_name == "__cpp_lib_transformation_trait_aliases") return MacroTokenKind::__CPP_LIB_TRANSFORMATION_TRAIT_ALIASES;
    if (tok_name == "__cpp_lib_transparent_operators") return MacroTokenKind::__CPP_LIB_TRANSPARENT_OPERATORS;
    if (tok_name == "__cpp_lib_tuple_element_t") return MacroTokenKind::__CPP_LIB_TUPLE_ELEMENT_T;
    if (tok_name == "__cpp_lib_tuple_like") return MacroTokenKind::__CPP_LIB_TUPLE_LIKE;
    if (tok_name == "__cpp_lib_tuples_by_type") return MacroTokenKind::__CPP_LIB_TUPLES_BY_TYPE;
    if (tok_name == "__cpp_lib_type_identity") return MacroTokenKind::__CPP_LIB_TYPE_IDENTITY;
    if (tok_name == "__cpp_lib_type_trait_variable_templates") return MacroTokenKind::__CPP_LIB_TYPE_TRAIT_VARIABLE_TEMPLATES;
    if (tok_name == "__cpp_lib_uncaught_exceptions") return MacroTokenKind::__CPP_LIB_UNCAUGHT_EXCEPTIONS;
    if (tok_name == "__cpp_lib_unordered_map_try_emplace") return MacroTokenKind::__CPP_LIB_UNORDERED_MAP_TRY_EMPLACE;
    if (tok_name == "__cpp_lib_unreachable") return MacroTokenKind::__CPP_LIB_UNREACHABLE;
    if (tok_name == "__cpp_lib_unwrap_ref") return MacroTokenKind::__CPP_LIB_UNWRAP_REF;
    if (tok_name == "__cpp_lib_variant") return MacroTokenKind::__CPP_LIB_VARIANT;
    if (tok_name == "__cpp_lib_void_t") return MacroTokenKind::__CPP_LIB_VOID_T;
    if (tok_name == "_Atomic") return MacroTokenKind::_ATOMIC;
    if (tok_name == "_IOFB") return MacroTokenKind::_IOFB;
    if (tok_name == "_IOLB") return MacroTokenKind::_IOLB;
    if (tok_name == "_IONB") return MacroTokenKind::_IONB;
    if (tok_name == "assert") return MacroTokenKind::ASSERT;
    if (tok_name == "ATOMIC_BOOL_LOCK_FREE") return MacroTokenKind::ATOMIC_BOOL_LOCK_FREE;
    if (tok_name == "ATOMIC_CHAR_LOCK_FREE") return MacroTokenKind::ATOMIC_CHAR_LOCK_FREE;
    if (tok_name == "ATOMIC_CHAR16_T_LOCK_FREE") return MacroTokenKind::ATOMIC_CHAR16_T_LOCK_FREE;
    if (tok_name == "ATOMIC_CHAR32_T_LOCK_FREE") return MacroTokenKind::ATOMIC_CHAR32_T_LOCK_FREE;
    if (tok_name == "ATOMIC_CHAR8_T_LOCK_FREE") return MacroTokenKind::ATOMIC_CHAR8_T_LOCK_FREE;
    if (tok_name == "ATOMIC_FLAG_INIT") return MacroTokenKind::ATOMIC_FLAG_INIT;
    if (tok_name == "ATOMIC_INT_LOCK_FREE") return MacroTokenKind::ATOMIC_INT_LOCK_FREE;
    if (tok_name == "ATOMIC_LLONG_LOCK_FREE") return MacroTokenKind::ATOMIC_LLONG_LOCK_FREE;
    if (tok_name == "ATOMIC_LONG_LOCK_FREE") return MacroTokenKind::ATOMIC_LONG_LOCK_FREE;
    if (tok_name == "ATOMIC_POINTER_LOCK_FREE") return MacroTokenKind::ATOMIC_POINTER_LOCK_FREE;
    if (tok_name == "ATOMIC_SHORT_LOCK_FREE") return MacroTokenKind::ATOMIC_SHORT_LOCK_FREE;
    if (tok_name == "ATOMIC_VAR_INIT") return MacroTokenKind::ATOMIC_VAR_INIT;
    if (tok_name == "ATOMIC_WCHAR_T_LOCK_FREE") return MacroTokenKind::ATOMIC_WCHAR_T_LOCK_FREE;
    if (tok_name == "BUFSIZ") return MacroTokenKind::_BUFSIZ;
    if (tok_name == "CHAR_BIT") return MacroTokenKind::CHAR_BIT;
    if (tok_name == "CHAR_MAX") return MacroTokenKind::CHAR_MAX;
    if (tok_name == "CHAR_MIN") return MacroTokenKind::CHAR_MIN;
    if (tok_name == "CLOCKS_PER_SEC") return MacroTokenKind::CLOCKS_PER_SEC;
    if (tok_name == "DBL_DECIMAL_DIG") return MacroTokenKind::DBL_DECIMAL_DIG;
    if (tok_name == "DBL_DIG") return MacroTokenKind::DBL_DIG;
    if (tok_name == "DBL_EPSILON") return MacroTokenKind::DBL_EPSILON;
    if (tok_name == "DBL_HAS_SUBNORM") return MacroTokenKind::DBL_HAS_SUBNORM;
    if (tok_name == "DBL_MANT_DIG") return MacroTokenKind::DBL_MANT_DIG;
    if (tok_name == "DBL_MAX") return MacroTokenKind::DBL_MAX;
    if (tok_name == "DBL_MAX_10_EXP") return MacroTokenKind::DBL_MAX_10_EXP;
    if (tok_name == "DBL_MAX_EXP") return MacroTokenKind::DBL_MAX_EXP;
    if (tok_name == "DBL_MIN") return MacroTokenKind::DBL_MIN;
    if (tok_name == "DBL_MIN_10_EXP") return MacroTokenKind::DBL_MIN_10_EXP;
    if (tok_name == "DBL_MIN_EXP") return MacroTokenKind::DBL_MIN_EXP;
    if (tok_name == "DBL_TRUE_MIN") return MacroTokenKind::DBL_TRUE_MIN;
    if (tok_name == "DECIMAL_DIG") return MacroTokenKind::DECIMAL_DIG;
    if (tok_name == "E2BIG") return MacroTokenKind::_E2BIG;
    if (tok_name == "EACCES") return MacroTokenKind::_EACCES;
    if (tok_name == "EADDRINUSE") return MacroTokenKind::_EADDRINUSE;
    if (tok_name == "EADDRNOTAVAIL") return MacroTokenKind::_EADDRNOTAVAIL;
    if (tok_name == "EAFNOSUPPORT") return MacroTokenKind::_EAFNOSUPPORT;
    if (tok_name == "EAGAIN") return MacroTokenKind::_EAGAIN;
    if (tok_name == "EALREADY") return MacroTokenKind::_EALREADY;
    if (tok_name == "EBADF") return MacroTokenKind::_EBADF;
    if (tok_name == "EBADMSG") return MacroTokenKind::_EBADMSG;
    if (tok_name == "EBUSY") return MacroTokenKind::_EBUSY;
    if (tok_name == "ECANCELED") return MacroTokenKind::_ECANCELED;
    if (tok_name == "ECHILD") return MacroTokenKind::_ECHILD;
    if (tok_name == "ECONNABORTED") return MacroTokenKind::_ECONNABORTED;
    if (tok_name == "ECONNREFUSED") return MacroTokenKind::_ECONNREFUSED;
    if (tok_name == "ECONNRESET") return MacroTokenKind::_ECONNRESET;
    if (tok_name == "EDEADLK") return MacroTokenKind::_EDEADLK;
    if (tok_name == "EDESTADDRREQ") return MacroTokenKind::_EDESTADDRREQ;
    if (tok_name == "EDOM") return MacroTokenKind::_EDOM;
    if (tok_name == "EEXIST") return MacroTokenKind::_EEXIST;
    if (tok_name == "EFAULT") return MacroTokenKind::_EFAULT;
    if (tok_name == "EFBIG") return MacroTokenKind::_EFBIG;
    if (tok_name == "EHOSTUNREACH") return MacroTokenKind::_EHOSTUNREACH;
    if (tok_name == "EIDRM") return MacroTokenKind::_EIDRM;
    if (tok_name == "EILSEQ") return MacroTokenKind::_EILSEQ;
    if (tok_name == "EINPROGRESS") return MacroTokenKind::_EINPROGRESS;
    if (tok_name == "EINTR") return MacroTokenKind::_EINTR;
    if (tok_name == "EINVAL") return MacroTokenKind::_EINVAL;
    if (tok_name == "EIO") return MacroTokenKind::_EIO;
    if (tok_name == "EISCONN") return MacroTokenKind::_EISCONN;
    if (tok_name == "EISDIR") return MacroTokenKind::_EISDIR;
    if (tok_name == "ELOOP") return MacroTokenKind::_ELOOP;
    if (tok_name == "EMFILE") return MacroTokenKind::_EMFILE;
    if (tok_name == "EMLINK") return MacroTokenKind::_EMLINK;
    if (tok_name == "EMSGSIZE") return MacroTokenKind::_EMSGSIZE;
    if (tok_name == "ENAMETOOLONG") return MacroTokenKind::_ENAMETOOLONG;
    if (tok_name == "ENETDOWN") return MacroTokenKind::_ENETDOWN;
    if (tok_name == "ENETRESET") return MacroTokenKind::_ENETRESET;
    if (tok_name == "ENETUNREACH") return MacroTokenKind::_ENETUNREACH;
    if (tok_name == "ENFILE") return MacroTokenKind::_ENFILE;
    if (tok_name == "ENOBUFS") return MacroTokenKind::_ENOBUFS;
    if (tok_name == "ENODATA") return MacroTokenKind::_ENODATA;
    if (tok_name == "ENODEV") return MacroTokenKind::_ENODEV;
    if (tok_name == "ENOENT") return MacroTokenKind::_ENOENT;
    if (tok_name == "ENOEXEC") return MacroTokenKind::_ENOEXEC;
    if (tok_name == "ENOLCK") return MacroTokenKind::_ENOLCK;
    if (tok_name == "ENOLINK") return MacroTokenKind::_ENOLINK;
    if (tok_name == "ENOMEM") return MacroTokenKind::_ENOMEM;
    if (tok_name == "ENOMSG") return MacroTokenKind::_ENOMSG;
    if (tok_name == "ENOPROTOOPT") return MacroTokenKind::_ENOPROTOOPT;
    if (tok_name == "ENOSPC") return MacroTokenKind::_ENOSPC;
    if (tok_name == "ENOSR") return MacroTokenKind::_ENOSR;
    if (tok_name == "ENOSTR") return MacroTokenKind::_ENOSTR;
    if (tok_name == "ENOSYS") return MacroTokenKind::_ENOSYS;
    if (tok_name == "ENOTCONN") return MacroTokenKind::_ENOTCONN;
    if (tok_name == "ENOTDIR") return MacroTokenKind::_ENOTDIR;
    if (tok_name == "ENOTEMPTY") return MacroTokenKind::_ENOTEMPTY;
    if (tok_name == "ENOTRECOVERABLE") return MacroTokenKind::_ENOTRECOVERABLE;
    if (tok_name == "ENOTSOCK") return MacroTokenKind::_ENOTSOCK;
    if (tok_name == "ENOTSUP") return MacroTokenKind::_ENOTSUP;
    if (tok_name == "ENOTTY") return MacroTokenKind::_ENOTTY;
    if (tok_name == "ENXIO") return MacroTokenKind::_ENXIO;
    if (tok_name == "EOF") return MacroTokenKind::_EOF;
    if (tok_name == "EOPNOTSUPP") return MacroTokenKind::_EOPNOTSUPP;
    if (tok_name == "EOVERFLOW") return MacroTokenKind::_EOVERFLOW;
    if (tok_name == "EOWNERDEAD") return MacroTokenKind::_EOWNERDEAD;
    if (tok_name == "EPERM") return MacroTokenKind::_EPERM;
    if (tok_name == "EPIPE") return MacroTokenKind::_EPIPE;
    if (tok_name == "EPROTO") return MacroTokenKind::_EPROTO;
    if (tok_name == "EPROTONOSUPPORT") return MacroTokenKind::_EPROTONOSUPPORT;
    if (tok_name == "EPROTOTYPE") return MacroTokenKind::_EPROTOTYPE;
    if (tok_name == "ERANGE") return MacroTokenKind::_ERANGE;
    if (tok_name == "EROFS") return MacroTokenKind::_EROFS;
    if (tok_name == "errno") return MacroTokenKind::_ERRNO;
    if (tok_name == "ESPIPE") return MacroTokenKind::_ESPIPE;
    if (tok_name == "ESRCH") return MacroTokenKind::_ESRCH;
    if (tok_name == "ETIME") return MacroTokenKind::_ETIME;
    if (tok_name == "ETIMEDOUT") return MacroTokenKind::_ETIMEDOUT;
    if (tok_name == "ETXTBSY") return MacroTokenKind::_ETXTBSY;
    if (tok_name == "EWOULDBLOCK") return MacroTokenKind::_EWOULDBLOCK;
    if (tok_name == "EXDEV") return MacroTokenKind::_EXDEV;
    if (tok_name == "EXIT_FAILURE") return MacroTokenKind::_EXIT_FAILURE;
    if (tok_name == "EXIT_SUCCESS") return MacroTokenKind::_EXIT_SUCCESS;
    if (tok_name == "FE_ALL_EXCEPT") return MacroTokenKind::FE_ALL_EXCEPT;
    if (tok_name == "FE_DFL_ENV") return MacroTokenKind::FE_DFL_ENV;
    if (tok_name == "FE_DIVBYZERO") return MacroTokenKind::FE_DIVBYZERO;
    if (tok_name == "FE_DOWNWARD") return MacroTokenKind::FE_DOWNWARD;
    if (tok_name == "FE_INEXACT") return MacroTokenKind::FE_INEXACT;
    if (tok_name == "FE_INVALID") return MacroTokenKind::FE_INVALID;
    if (tok_name == "FE_OVERFLOW") return MacroTokenKind::FE_OVERFLOW;
    if (tok_name == "FE_TONEAREST") return MacroTokenKind::FE_TONEAREST;
    if (tok_name == "FE_TOWARDZERO") return MacroTokenKind::FE_TOWARDZERO;
    if (tok_name == "FE_UNDERFLOW") return MacroTokenKind::FE_UNDERFLOW;
    if (tok_name == "FE_UPWARD") return MacroTokenKind::FE_UPWARD;
    if (tok_name == "FILENAME_MAX") return MacroTokenKind::_FILENAME_MAX;
    if (tok_name == "FLT_DECIMAL_DIG") return MacroTokenKind::FLT_DECIMAL_DIG;
    if (tok_name == "FLT_DIG") return MacroTokenKind::FLT_DIG;
    if (tok_name == "FLT_EPSILON") return MacroTokenKind::FLT_EPSILON;
    if (tok_name == "FLT_EVAL_METHOD") return MacroTokenKind::FLT_EVAL_METHOD;
    if (tok_name == "FLT_HAS_SUBNORM") return MacroTokenKind::FLT_HAS_SUBNORM;
    if (tok_name == "FLT_MANT_DIG") return MacroTokenKind::FLT_MANT_DIG;
    if (tok_name == "FLT_MAX") return MacroTokenKind::FLT_MAX;
    if (tok_name == "FLT_MAX_10_EXP") return MacroTokenKind::FLT_MAX_10_EXP;
    if (tok_name == "FLT_MAX_EXP") return MacroTokenKind::FLT_MAX_EXP;
    if (tok_name == "FLT_MIN") return MacroTokenKind::FLT_MIN;
    if (tok_name == "FLT_MIN_10_EXP") return MacroTokenKind::FLT_MIN_10_EXP;
    if (tok_name == "FLT_MIN_EXP") return MacroTokenKind::FLT_MIN_EXP;
    if (tok_name == "FLT_RADIX") return MacroTokenKind::FLT_RADIX;
    if (tok_name == "FLT_ROUNDS") return MacroTokenKind::FLT_ROUNDS;
    if (tok_name == "FLT_TRUE_MIN") return MacroTokenKind::FLT_TRUE_MIN;
    if (tok_name == "FOPEN_MAX") return MacroTokenKind::_FOPEN_MAX;
    if (tok_name == "FP_FAST_FMA") return MacroTokenKind::FP_FAST_FMA;
    if (tok_name == "FP_FAST_FMAF") return MacroTokenKind::FP_FAST_FMAF;
    if (tok_name == "FP_FAST_FMAL") return MacroTokenKind::FP_FAST_FMAL;
    if (tok_name == "FP_ILOGB0") return MacroTokenKind::FP_ILOGB0;
    if (tok_name == "FP_ILOGBNAN") return MacroTokenKind::FP_ILOGBNAN;
    if (tok_name == "FP_SUBNORMAL") return MacroTokenKind::FP_SUBNORMAL;
    if (tok_name == "FP_ZERO") return MacroTokenKind::FP_ZERO;
    if (tok_name == "FP_INFINITE") return MacroTokenKind::FP_INFINITE;
    if (tok_name == "FP_NAN") return MacroTokenKind::FP_NAN;
    if (tok_name == "FP_NORMAL") return MacroTokenKind::FP_NORMAL;
    if (tok_name == "HUGE_VAL") return MacroTokenKind::HUGE_VAL;
    if (tok_name == "HUGE_VALF") return MacroTokenKind::HUGE_VALF;
    if (tok_name == "HUGE_VALL") return MacroTokenKind::HUGE_VALL;
    if (tok_name == "INFINITY") return MacroTokenKind::INFINITY;
    if (tok_name == "INT_FAST16_MAX") return MacroTokenKind::INT_FAST16_MAX;
    if (tok_name == "INT_FAST16_MIN") return MacroTokenKind::INT_FAST16_MIN;
    if (tok_name == "INT_FAST32_MAX") return MacroTokenKind::INT_FAST32_MAX;
    if (tok_name == "INT_FAST32_MIN") return MacroTokenKind::INT_FAST32_MIN;
    if (tok_name == "INT_FAST64_MAX") return MacroTokenKind::INT_FAST64_MAX;
    if (tok_name == "INT_FAST64_MIN") return MacroTokenKind::INT_FAST64_MIN;
    if (tok_name == "INT_FAST8_MAX") return MacroTokenKind::INT_FAST8_MAX;
    if (tok_name == "INT_FAST8_MIN") return MacroTokenKind::INT_FAST8_MIN;
    if (tok_name == "INT_LEAST16_MAX") return MacroTokenKind::INT_LEAST16_MAX;
    if (tok_name == "INT_LEAST16_MIN") return MacroTokenKind::INT_LEAST16_MIN;
    if (tok_name == "INT_LEAST32_MAX") return MacroTokenKind::INT_LEAST32_MAX;
    if (tok_name == "INT_LEAST32_MIN") return MacroTokenKind::INT_LEAST32_MIN;
    if (tok_name == "INT_LEAST64_MAX") return MacroTokenKind::INT_LEAST64_MAX;
    if (tok_name == "INT_LEAST64_MIN") return MacroTokenKind::INT_LEAST64_MIN;
    if (tok_name == "INT_LEAST8_MAX") return MacroTokenKind::INT_LEAST8_MAX;
    if (tok_name == "INT_LEAST8_MIN") return MacroTokenKind::INT_LEAST8_MIN;
    if (tok_name == "INT_MAX") return MacroTokenKind::INT_MAX;
    if (tok_name == "INT_MIN") return MacroTokenKind::INT_MIN;
    if (tok_name == "INT16_C") return MacroTokenKind::INT16_C;
    if (tok_name == "INT16_MAX") return MacroTokenKind::INT16_MAX;
    if (tok_name == "INT16_MIN") return MacroTokenKind::INT16_MIN;
    if (tok_name == "INT32_C") return MacroTokenKind::INT32_C;
    if (tok_name == "INT32_MAX") return MacroTokenKind::INT32_MAX;
    if (tok_name == "INT32_MIN") return MacroTokenKind::INT32_MIN;
    if (tok_name == "INT64_C") return MacroTokenKind::INT64_C;
    if (tok_name == "INT64_MAX") return MacroTokenKind::INT64_MAX;
    if (tok_name == "INT64_MIN") return MacroTokenKind::INT64_MIN;
    if (tok_name == "INT8_C") return MacroTokenKind::INT8_C;
    if (tok_name == "INT8_MAX") return MacroTokenKind::INT8_MAX;
    if (tok_name == "INT8_MIN") return MacroTokenKind::INT8_MIN;
    if (tok_name == "INTMAX_C") return MacroTokenKind::INTMAX_C;
    if (tok_name == "INTMAX_MAX") return MacroTokenKind::INTMAX_MAX;
    if (tok_name == "INTMAX_MIN") return MacroTokenKind::INTMAX_MIN;
    if (tok_name == "INTPTR_MAX") return MacroTokenKind::INTPTR_MAX;
    if (tok_name == "INTPTR_MIN") return MacroTokenKind::INTPTR_MIN;
    if (tok_name == "L_tmpnam") return MacroTokenKind::L_TMPNAM;
    if (tok_name == "LC_ALL") return MacroTokenKind::_LC_ALL;
    if (tok_name == "LC_COLLATE") return MacroTokenKind::_LC_COLLATE;
    if (tok_name == "LC_CTYPE") return MacroTokenKind::_LC_CTYPE;
    if (tok_name == "LC_MONETARY") return MacroTokenKind::_LC_MONETARY;
    if (tok_name == "LC_NUMERIC") return MacroTokenKind::_LC_NUMERIC;
    if (tok_name == "LC_TIME") return MacroTokenKind::_LC_TIME;
    if (tok_name == "LDBL_DECIMAL_DIG") return MacroTokenKind::LDBL_DECIMAL_DIG;
    if (tok_name == "LDBL_DIG") return MacroTokenKind::LDBL_DIG;
    if (tok_name == "LDBL_EPSILON") return MacroTokenKind::LDBL_EPSILON;
    if (tok_name == "LDBL_HAS_SUBNORM") return MacroTokenKind::LDBL_HAS_SUBNORM;
    if (tok_name == "LDBL_MANT_DIG") return MacroTokenKind::LDBL_MANT_DIG;
    if (tok_name == "LDBL_MAX") return MacroTokenKind::LDBL_MAX;
    if (tok_name == "LDBL_MAX_10_EXP") return MacroTokenKind::LDBL_MAX_10_EXP;
    if (tok_name == "LDBL_MAX_EXP") return MacroTokenKind::LDBL_MAX_EXP;
    if (tok_name == "LDBL_MIN") return MacroTokenKind::LDBL_MIN;
    if (tok_name == "LDBL_MIN_10_EXP") return MacroTokenKind::LDBL_MIN_10_EXP;
    if (tok_name == "LDBL_MIN_EXP") return MacroTokenKind::LDBL_MIN_EXP;
    if (tok_name == "LDBL_TRUE_MIN") return MacroTokenKind::LDBL_TRUE_MIN;
    if (tok_name == "LLONG_MAX") return MacroTokenKind::LLONG_MAX;
    if (tok_name == "LLONG_MIN") return MacroTokenKind::LLONG_MIN;
    if (tok_name == "LONG_MAX") return MacroTokenKind::LONG_MAX;
    if (tok_name == "LONG_MIN") return MacroTokenKind::LONG_MIN;
    if (tok_name == "MATH_ERREXCEPT") return MacroTokenKind::MATH_ERREXCEPT;
    if (tok_name == "math_errhandling") return MacroTokenKind::MATH_ERRHANDLING;
    if (tok_name == "MATH_ERRNO") return MacroTokenKind::MATH_ERRNO;
    if (tok_name == "MB_CUR_MAX") return MacroTokenKind::_MB_CUR_MAX;
    if (tok_name == "MB_LEN_MAX") return MacroTokenKind::MB_LEN_MAX;
    if (tok_name == "NAN") return MacroTokenKind::NAN;
    if (tok_name == "NULL") return MacroTokenKind::_NULL;
    if (tok_name == "offsetof") return MacroTokenKind::OFFSETOF;
    if (tok_name == "ONCE_FLAG_INIT") return MacroTokenKind::ONCE_FLAG_INIT;
    if (tok_name == "PRId16") return MacroTokenKind::PRID16;
    if (tok_name == "PRId32") return MacroTokenKind::PRID32;
    if (tok_name == "PRId64") return MacroTokenKind::PRID64;
    if (tok_name == "PRId8") return MacroTokenKind::PRID8;
    if (tok_name == "PRIdFAST16") return MacroTokenKind::PRIDFAST16;
    if (tok_name == "PRIdFAST32") return MacroTokenKind::PRIDFAST32;
    if (tok_name == "PRIdFAST64") return MacroTokenKind::PRIDFAST64;
    if (tok_name == "PRIdFAST8") return MacroTokenKind::PRIDFAST8;
    if (tok_name == "PRIdLEAST16") return MacroTokenKind::PRIDLEAST16;
    if (tok_name == "PRIdLEAST32") return MacroTokenKind::PRIDLEAST32;
    if (tok_name == "PRIdLEAST64") return MacroTokenKind::PRIDLEAST64;
    if (tok_name == "PRIdLEAST8") return MacroTokenKind::PRIDLEAST8;
    if (tok_name == "PRIdMAX") return MacroTokenKind::PRIDMAX;
    if (tok_name == "PRIdPTR") return MacroTokenKind::PRIDPTR;
    if (tok_name == "PRIi16") return MacroTokenKind::PRII16;
    if (tok_name == "PRIi32") return MacroTokenKind::PRII32;
    if (tok_name == "PRIi64") return MacroTokenKind::PRII64;
    if (tok_name == "PRIi8") return MacroTokenKind::PRII8;
    if (tok_name == "PRIiFAST16") return MacroTokenKind::PRIIFAST16;
    if (tok_name == "PRIiFAST32") return MacroTokenKind::PRIIFAST32;
    if (tok_name == "PRIiFAST64") return MacroTokenKind::PRIIFAST64;
    if (tok_name == "PRIiFAST8") return MacroTokenKind::PRIIFAST8;
    if (tok_name == "PRIiLEAST16") return MacroTokenKind::PRIILEAST16;
    if (tok_name == "PRIiLEAST32") return MacroTokenKind::PRIILEAST32;
    if (tok_name == "PRIiLEAST64") return MacroTokenKind::PRIILEAST64;
    if (tok_name == "PRIiLEAST8") return MacroTokenKind::PRIILEAST8;
    if (tok_name == "PRIiMAX") return MacroTokenKind::PRIIMAX;
    if (tok_name == "PRIiPTR") return MacroTokenKind::PRIIPTR;
    if (tok_name == "PRIo16") return MacroTokenKind::PRIO16;
    if (tok_name == "PRIo32") return MacroTokenKind::PRIO32;
    if (tok_name == "PRIo64") return MacroTokenKind::PRIO64;
    if (tok_name == "PRIo8") return MacroTokenKind::PRIO8;
    if (tok_name == "PRIoFAST16") return MacroTokenKind::PRIOFAST16;
    if (tok_name == "PRIoFAST32") return MacroTokenKind::PRIOFAST32;
    if (tok_name == "PRIoFAST64") return MacroTokenKind::PRIOFAST64;
    if (tok_name == "PRIoFAST8") return MacroTokenKind::PRIOFAST8;
    if (tok_name == "PRIoLEAST16") return MacroTokenKind::PRIOLEAST16;
    if (tok_name == "PRIoLEAST32") return MacroTokenKind::PRIOLEAST32;
    if (tok_name == "PRIoLEAST64") return MacroTokenKind::PRIOLEAST64;
    if (tok_name == "PRIoLEAST8") return MacroTokenKind::PRIOLEAST8;
    if (tok_name == "PRIoMAX") return MacroTokenKind::PRIOMAX;
    if (tok_name == "PRIoPTR") return MacroTokenKind::PRIOPTR;
    if (tok_name == "PRIu16") return MacroTokenKind::PRIU16;
    if (tok_name == "PRIu32") return MacroTokenKind::PRIU32;
    if (tok_name == "PRIu64") return MacroTokenKind::PRIU64;
    if (tok_name == "PRIu8") return MacroTokenKind::PRIU8;
    if (tok_name == "PRIuFAST16") return MacroTokenKind::PRIUFAST16;
    if (tok_name == "PRIuFAST32") return MacroTokenKind::PRIUFAST32;
    if (tok_name == "PRIuFAST64") return MacroTokenKind::PRIUFAST64;
    if (tok_name == "PRIuFAST8") return MacroTokenKind::PRIUFAST8;
    if (tok_name == "PRIuLEAST16") return MacroTokenKind::PRIULEAST16;
    if (tok_name == "PRIuLEAST32") return MacroTokenKind::PRIULEAST32;
    if (tok_name == "PRIuLEAST64") return MacroTokenKind::PRIULEAST64;
    if (tok_name == "PRIuLEAST8") return MacroTokenKind::PRIULEAST8;
    if (tok_name == "PRIuMAX") return MacroTokenKind::PRIUMAX;
    if (tok_name == "PRIuPTR") return MacroTokenKind::PRIUPTR;
    if (tok_name == "PRIx16") return MacroTokenKind::PRIX16;
    if (tok_name == "PRIX16") return MacroTokenKind::_PRIX16;
    if (tok_name == "PRIx32") return MacroTokenKind::_PRIX32;
    if (tok_name == "PRIX32") return MacroTokenKind::PRIX32;
    if (tok_name == "PRIx64") return MacroTokenKind::PRIX64;
    if (tok_name == "PRIX64") return MacroTokenKind::_PRIX64;
    if (tok_name == "PRIx8") return MacroTokenKind::PRIX8;
    if (tok_name == "PRIX8") return MacroTokenKind::_PRIX8;
    if (tok_name == "PRIxFAST16") return MacroTokenKind::PRIXFAST16;
    if (tok_name == "PRIXFAST16") return MacroTokenKind::_PRIXFAST16;
    if (tok_name == "PRIxFAST32") return MacroTokenKind::PRIXFAST32;
    if (tok_name == "PRIXFAST32") return MacroTokenKind::_PRIXFAST32;
    if (tok_name == "PRIxFAST64") return MacroTokenKind::PRIXFAST64;
    if (tok_name == "PRIXFAST64") return MacroTokenKind::_PRIXFAST64;
    if (tok_name == "PRIxFAST8") return MacroTokenKind::PRIXFAST8;
    if (tok_name == "PRIXFAST8") return MacroTokenKind::_PRIXFAST8;
    if (tok_name == "PRIxLEAST16") return MacroTokenKind::PRIXLEAST16;
    if (tok_name == "PRIXLEAST16") return MacroTokenKind::_PRIXLEAST16;
    if (tok_name == "PRIxLEAST32") return MacroTokenKind::PRIXLEAST32;
    if (tok_name == "PRIXLEAST32") return MacroTokenKind::_PRIXLEAST32;
    if (tok_name == "PRIxLEAST64") return MacroTokenKind::PRIXLEAST64;
    if (tok_name == "PRIXLEAST64") return MacroTokenKind::_PRIXLEAST64;
    if (tok_name == "PRIxLEAST8") return MacroTokenKind::PRIXLEAST8;
    if (tok_name == "PRIXLEAST8") return MacroTokenKind::_PRIXLEAST8;
    if (tok_name == "PRIxMAX") return MacroTokenKind::PRIXMAX;
    if (tok_name == "PRIXMAX") return MacroTokenKind::_PRIXMAX;
    if (tok_name == "PRIxPTR") return MacroTokenKind::PRIXPTR;
    if (tok_name == "PRIXPTR") return MacroTokenKind::_PRIXPTR;
    if (tok_name == "PTRDIFF_MAX") return MacroTokenKind::PTRDIFF_MAX;
    if (tok_name == "PTRDIFF_MIN") return MacroTokenKind::PTRDIFF_MIN;
    if (tok_name == "RAND_MAX") return MacroTokenKind::_RAND_MAX;
    if (tok_name == "SCHAR_MAX") return MacroTokenKind::SCHAR_MAX;
    if (tok_name == "SCHAR_MIN") return MacroTokenKind::SCHAR_MIN;
    if (tok_name == "SCNd16") return MacroTokenKind::SCND16;
    if (tok_name == "SCNd32") return MacroTokenKind::SCND32;
    if (tok_name == "SCNd64") return MacroTokenKind::SCND64;
    if (tok_name == "SCNd8") return MacroTokenKind::SCND8;
    if (tok_name == "SCNdFAST16") return MacroTokenKind::SCNDFAST16;
    if (tok_name == "SCNdFAST32") return MacroTokenKind::SCNDFAST32;
    if (tok_name == "SCNdFAST64") return MacroTokenKind::SCNDFAST64;
    if (tok_name == "SCNdFAST8") return MacroTokenKind::SCNDFAST8;
    if (tok_name == "SCNdLEAST16") return MacroTokenKind::SCNDLEAST16;
    if (tok_name == "SCNdLEAST32") return MacroTokenKind::SCNDLEAST32;
    if (tok_name == "SCNdLEAST64") return MacroTokenKind::SCNDLEAST64;
    if (tok_name == "SCNdLEAST8") return MacroTokenKind::SCNDLEAST8;
    if (tok_name == "SCNdMAX") return MacroTokenKind::SCNDMAX;
    if (tok_name == "SCNdPTR") return MacroTokenKind::SCNDPTR;
    if (tok_name == "SCNi16") return MacroTokenKind::SCNI16;
    if (tok_name == "SCNi32") return MacroTokenKind::SCNI32;
    if (tok_name == "SCNi64") return MacroTokenKind::SCNI64;
    if (tok_name == "SCNi8") return MacroTokenKind::SCNI8;
    if (tok_name == "SCNiFAST16") return MacroTokenKind::SCNIFAST16;
    if (tok_name == "SCNiFAST32") return MacroTokenKind::SCNIFAST32;
    if (tok_name == "SCNiFAST64") return MacroTokenKind::SCNIFAST64;
    if (tok_name == "SCNiFAST8") return MacroTokenKind::SCNIFAST8;
    if (tok_name == "SCNiLEAST16") return MacroTokenKind::SCNILEAST16;
    if (tok_name == "SCNiLEAST32") return MacroTokenKind::SCNILEAST32;
    if (tok_name == "SCNiLEAST64") return MacroTokenKind::SCNILEAST64;
    if (tok_name == "SCNiLEAST8") return MacroTokenKind::SCNILEAST8;
    if (tok_name == "SCNiMAX") return MacroTokenKind::SCNIMAX;
    if (tok_name == "SCNiPTR") return MacroTokenKind::SCNIPTR;
    if (tok_name == "SCNo16") return MacroTokenKind::SCNO16;
    if (tok_name == "SCNo32") return MacroTokenKind::SCNO32;
    if (tok_name == "SCNo64") return MacroTokenKind::SCNO64;
    if (tok_name == "SCNo8") return MacroTokenKind::SCNO8;
    if (tok_name == "SCNoFAST16") return MacroTokenKind::SCNOFAST16;
    if (tok_name == "SCNoFAST32") return MacroTokenKind::SCNOFAST32;
    if (tok_name == "SCNoFAST64") return MacroTokenKind::SCNOFAST64;
    if (tok_name == "SCNoFAST8") return MacroTokenKind::SCNOFAST8;
    if (tok_name == "SCNoLEAST16") return MacroTokenKind::SCNOLEAST16;
    if (tok_name == "SCNoLEAST32") return MacroTokenKind::SCNOLEAST32;
    if (tok_name == "SCNoLEAST64") return MacroTokenKind::SCNOLEAST64;
    if (tok_name == "SCNoLEAST8") return MacroTokenKind::SCNOLEAST8;
    if (tok_name == "SCNoMAX") return MacroTokenKind::SCNOMAX;
    if (tok_name == "SCNoPTR") return MacroTokenKind::SCNOPTR;
    if (tok_name == "SCNu16") return MacroTokenKind::SCNU16;
    if (tok_name == "SCNu32") return MacroTokenKind::SCNU32;
    if (tok_name == "SCNu64") return MacroTokenKind::SCNU64;
    if (tok_name == "SCNu8") return MacroTokenKind::SCNU8;
    if (tok_name == "SCNuFAST16") return MacroTokenKind::SCNUFAST16;
    if (tok_name == "SCNuFAST32") return MacroTokenKind::SCNUFAST32;
    if (tok_name == "SCNuFAST64") return MacroTokenKind::SCNUFAST64;
    if (tok_name == "SCNuFAST8") return MacroTokenKind::SCNUFAST8;
    if (tok_name == "SCNuLEAST16") return MacroTokenKind::SCNULEAST16;
    if (tok_name == "SCNuLEAST32") return MacroTokenKind::SCNULEAST32;
    if (tok_name == "SCNuLEAST64") return MacroTokenKind::SCNULEAST64;
    if (tok_name == "SCNuLEAST8") return MacroTokenKind::SCNULEAST8;
    if (tok_name == "SCNuMAX") return MacroTokenKind::SCNUMAX;
    if (tok_name == "SCNuPTR") return MacroTokenKind::SCNUPTR;
    if (tok_name == "SCNx16") return MacroTokenKind::SCNX16;
    if (tok_name == "SCNx32") return MacroTokenKind::SCNX32;
    if (tok_name == "SCNx64") return MacroTokenKind::SCNX64;
    if (tok_name == "SCNx8") return MacroTokenKind::SCNX8;
    if (tok_name == "SCNxFAST16") return MacroTokenKind::SCNXFAST16;
    if (tok_name == "SCNxFAST32") return MacroTokenKind::SCNXFAST32;
    if (tok_name == "SCNxFAST64") return MacroTokenKind::SCNXFAST64;
    if (tok_name == "SCNxFAST8") return MacroTokenKind::SCNXFAST8;
    if (tok_name == "SCNxLEAST16") return MacroTokenKind::SCNXLEAST16;
    if (tok_name == "SCNxLEAST32") return MacroTokenKind::SCNXLEAST32;
    if (tok_name == "SCNxLEAST64") return MacroTokenKind::SCNXLEAST64;
    if (tok_name == "SCNxLEAST8") return MacroTokenKind::SCNXLEAST8;
    if (tok_name == "SCNxMAX") return MacroTokenKind::SCNXMAX;
    if (tok_name == "SCNxPTR") return MacroTokenKind::SCNXPTR;
    if (tok_name == "SEEK_CUR") return MacroTokenKind::_SEEK_CUR;
    if (tok_name == "SEEK_END") return MacroTokenKind::_SEEK_END;
    if (tok_name == "SEEK_SET") return MacroTokenKind::_SEEK_SET;
    if (tok_name == "setjmp") return MacroTokenKind::SETJMP;
    if (tok_name == "SHRT_MAX") return MacroTokenKind::SHRT_MAX;
    if (tok_name == "SHRT_MIN") return MacroTokenKind::SHRT_MIN;
    if (tok_name == "SIG_ATOMIC_MAX") return MacroTokenKind::SIG_ATOMIC_MAX;
    if (tok_name == "SIG_ATOMIC_MIN") return MacroTokenKind::SIG_ATOMIC_MIN;
    if (tok_name == "SIG_DFL") return MacroTokenKind::SIG_DFL;
    if (tok_name == "SIG_ERR") return MacroTokenKind::SIG_ERR;
    if (tok_name == "SIG_IGN") return MacroTokenKind::SIG_IGN;
    if (tok_name == "SIGABRT") return MacroTokenKind::SIGABRT;
    if (tok_name == "SIGFPE") return MacroTokenKind::SIGFPE;
    if (tok_name == "SIGILL") return MacroTokenKind::SIGILL;
    if (tok_name == "SIGINT") return MacroTokenKind::SIGINT;
    if (tok_name == "SIGSEGV") return MacroTokenKind::SIGSEGV;
    if (tok_name == "SIGTERM") return MacroTokenKind::SIGTERM;
    if (tok_name == "SIZE_MAX") return MacroTokenKind::SIZE_MAX;
    if (tok_name == "stderr") return MacroTokenKind::STDERR;
    if (tok_name == "stdin") return MacroTokenKind::STDIN;
    if (tok_name == "stdout") return MacroTokenKind::STDOUT;
    if (tok_name == "TIME_UTC") return MacroTokenKind::TIME_UTC;
    if (tok_name == "TMP_MAX") return MacroTokenKind::_TMP_MAX;
    if (tok_name == "UCHAR_MAX") return MacroTokenKind::UCHAR_MAX;
    if (tok_name == "UINT_FAST16_MAX") return MacroTokenKind::UINT_FAST16_MAX;
    if (tok_name == "UINT_FAST32_MAX") return MacroTokenKind::UINT_FAST32_MAX;
    if (tok_name == "UINT_FAST64_MAX") return MacroTokenKind::UINT_FAST64_MAX;
    if (tok_name == "UINT_FAST8_MAX") return MacroTokenKind::UINT_FAST8_MAX;
    if (tok_name == "UINT_LEAST16_MAX") return MacroTokenKind::UINT_LEAST16_MAX;
    if (tok_name == "UINT_LEAST32_MAX") return MacroTokenKind::UINT_LEAST32_MAX;
    if (tok_name == "UINT_LEAST64_MAX") return MacroTokenKind::UINT_LEAST64_MAX;
    if (tok_name == "UINT_LEAST8_MAX") return MacroTokenKind::UINT_LEAST8_MAX;
    if (tok_name == "UINT_MAX") return MacroTokenKind::UINT_MAX;
    if (tok_name == "UINT16_C") return MacroTokenKind::UINT16_C;
    if (tok_name == "UINT16_MAX") return MacroTokenKind::UINT16_MAX;
    if (tok_name == "UINT32_C") return MacroTokenKind::UINT32_C;
    if (tok_name == "UINT32_MAX") return MacroTokenKind::UINT32_MAX;
    if (tok_name == "UINT64_MAX") return MacroTokenKind::UINT64_MAX;
    if (tok_name == "UINT64_C") return MacroTokenKind::UINT64_C;
    if (tok_name == "UINT8_C") return MacroTokenKind::UINT8_C;
    if (tok_name == "UINT8_MAX") return MacroTokenKind::UINT8_MAX;
    if (tok_name == "UINTMAX_C") return MacroTokenKind::UINTMAX_C;
    if (tok_name == "UINTMAX_MAX") return MacroTokenKind::UINTMAX_MAX;
    if (tok_name == "UINTPTR_MAX") return MacroTokenKind::UINTPTR_MAX;
    if (tok_name == "ULLONG_MAX") return MacroTokenKind::ULLONG_MAX;
    if (tok_name == "ULONG_MAX") return MacroTokenKind::ULONG_MAX;
    if (tok_name == "USHRT_MAX") return MacroTokenKind::USHRT_MAX;
    if (tok_name == "va_arg") return MacroTokenKind::VA_ARG;
    if (tok_name == "va_copy") return MacroTokenKind::VA_COPY;
    if (tok_name == "va_end") return MacroTokenKind::VA_END;
    if (tok_name == "va_start") return MacroTokenKind::VA_START;
    if (tok_name == "WCHAR_MAX") return MacroTokenKind::_WCHAR_MAX;
    if (tok_name == "WCHAR_MIN") return MacroTokenKind::_WCHAR_MIN;
    if (tok_name == "WEOF") return MacroTokenKind::_WEOF;
    if (tok_name == "WINT_MAX") return MacroTokenKind::WINT_MAX;
    if (tok_name == "WINT_MIN") return MacroTokenKind::WINT_MIN;

    return MacroTokenKind::ERROR;
};

const std::string GetMacroTokenKind(const MacroTokenKind tok_kind) {
    switch(tok_kind) {
        case MacroTokenKind::__ALIGNAS_IS_DEFINED: return "__alignas_is_defined";
        case MacroTokenKind::__BOOL_TRUE_FALSE_ARE_DEFINED: return "__bool_true_false_are_defined";
        case MacroTokenKind::__CPP_LIB_ADAPTOR_ITERATOR_PAIR_CONSTRUCTOR: return "__cpp_lib_adaptor_iterator_pair_constructor";
        case MacroTokenKind::__CPP_LIB_ADDRESSOF_CONSTEXPR: return "__cpp_lib_addressof_constexpr";
        case MacroTokenKind::__CPP_LIB_ALGORITHM_DEFAULT_VALUE_TYPE: return "__cpp_lib_algorithm_default_value_type";
        case MacroTokenKind::__CPP_LIB_ALGORITHM_ITERATOR_REQUIREMENTS: return "__cpp_lib_algorithm_iterator_requirements";
        case MacroTokenKind::__CPP_LIB_ALLOCATE_AT_LEAST: return "__cpp_lib_allocate_at_least";
        case MacroTokenKind::__CPP_LIB_ALLOCATOR_TRAITS_IS_ALWAYS_EQUAL: return "__cpp_lib_allocator_traits_is_always_equal";
        case MacroTokenKind::__CPP_LIB_ANY: return "__cpp_lib_any";
        case MacroTokenKind::__CPP_LIB_APPLY: return "__cpp_lib_apply";
        case MacroTokenKind::__CPP_LIB_ARRAY_CONSTEXPR: return "__cpp_lib_array_constexpr";
        case MacroTokenKind::__CPP_LIB_AS_CONST: return "__cpp_lib_as_const";
        case MacroTokenKind::__CPP_LIB_ASSOCIATIVE_HETEROGENEOUS_ERASURE: return "__cpp_lib_associative_heterogeneous_erasure";
        case MacroTokenKind::__CPP_LIB_ASSOCIATIVE_HETEROGENEOUS_INSERTION: return "__cpp_lib_associative_heterogeneous_insertion";
        case MacroTokenKind::__CPP_LIB_ASSUME_ALIGNED: return "__cpp_lib_assume_aligned";
        case MacroTokenKind::__CPP_LIB_ATOMIC_FLAG_TEST: return "__cpp_lib_atomic_flag_test";
        case MacroTokenKind::__CPP_LIB_ATOMIC_FLOAT: return "__cpp_lib_atomic_float";
        case MacroTokenKind::__CPP_LIB_ATOMIC_IS_ALWAYS_LOCK_FREE: return "__cpp_lib_atomic_is_always_lock_free";
        case MacroTokenKind::__CPP_LIB_ATOMIC_LOCK_FREE_TYPE_ALIASES: return "__cpp_lib_atomic_lock_free_type_aliases";
        case MacroTokenKind::__CPP_LIB_ATOMIC_MIN_MAX: return "__cpp_lib_atomic_min_max";
        case MacroTokenKind::__CPP_LIB_ATOMIC_REF: return "__cpp_lib_atomic_ref";
        case MacroTokenKind::__CPP_LIB_ATOMIC_SHARED_PTR: return "__cpp_lib_atomic_shared_ptr";
        case MacroTokenKind::__CPP_LIB_ATOMIC_VALUE_INITIALIZATION: return "__cpp_lib_atomic_value_initialization";
        case MacroTokenKind::__CPP_LIB_ATOMIC_WAIT: return "__cpp_lib_atomic_wait";
        case MacroTokenKind::__CPP_LIB_BARRIER: return "__cpp_lib_barrier";
        case MacroTokenKind::__CPP_LIB_BIND_BACK: return "__cpp_lib_bind_back";
        case MacroTokenKind::__CPP_LIB_BIND_FRONT: return "__cpp_lib_bind_front";
        case MacroTokenKind::__CPP_LIB_BIT_CAST: return "__cpp_lib_bit_cast";
        case MacroTokenKind::__CPP_LIB_BITOPS: return "__cpp_lib_bitops";
        case MacroTokenKind::__CPP_LIB_BITSET: return "__cpp_lib_bitset";
        case MacroTokenKind::__CPP_LIB_BOOL_CONSTANT: return "__cpp_lib_bool_constant";
        case MacroTokenKind::__CPP_LIB_BOUNDED_ARRAY_TRAITS: return "__cpp_lib_bounded_array_traits";
        case MacroTokenKind::__CPP_LIB_BOYER_MOORE_SEARCHER: return "__cpp_lib_boyer_moore_searcher";
        case MacroTokenKind::__CPP_LIB_BYTE: return "__cpp_lib_byte";
        case MacroTokenKind::__CPP_LIB_BYTESWAP: return "__cpp_lib_byteswap";
        case MacroTokenKind::__CPP_LIB_CHAR8_T: return "__cpp_lib_char8_t";
        case MacroTokenKind::__CPP_LIB_CHRONO: return "__cpp_lib_chrono";
        case MacroTokenKind::__CPP_LIB_CHRONO_UDLS: return "__cpp_lib_chrono_udls";
        case MacroTokenKind::__CPP_LIB_CLAMP: return "__cpp_lib_clamp";
        case MacroTokenKind::__CPP_LIB_COMMON_REFERENCE: return "__cpp_lib_common_reference";
        case MacroTokenKind::__CPP_LIB_COMMON_REFERENCE_WRAPPER: return "__cpp_lib_common_reference_wrapper";
        case MacroTokenKind::__CPP_LIB_COMPLEX_UDLS: return "__cpp_lib_complex_udls";
        case MacroTokenKind::__CPP_LIB_CONCEPTS: return "__cpp_lib_concepts";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_ALGORITHMS: return "__cpp_lib_constexpr_algorithms";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_BITSET: return "__cpp_lib_constexpr_bitset";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_CHARCONV: return "__cpp_lib_constexpr_charconv";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_CMATH: return "__cpp_lib_constexpr_cmath";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_COMPLEX: return "__cpp_lib_constexpr_complex";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_DYNAMIC_ALLOC: return "__cpp_lib_constexpr_dynamic_alloc";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_FUNCTIONAL: return "__cpp_lib_constexpr_functional";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_ITERATOR: return "__cpp_lib_constexpr_iterator";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_MEMORY: return "__cpp_lib_constexpr_memory";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_NUMERIC: return "__cpp_lib_constexpr_numeric";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_STRING: return "__cpp_lib_constexpr_string";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_STRING_VIEW: return "__cpp_lib_constexpr_string_view";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_TUPLE: return "__cpp_lib_constexpr_tuple";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_TYPEINFO: return "__cpp_lib_constexpr_typeinfo";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_UTILITY: return "__cpp_lib_constexpr_utility";
        case MacroTokenKind::__CPP_LIB_CONSTEXPR_VECTOR: return "__cpp_lib_constexpr_vector";
        case MacroTokenKind::__CPP_LIB_CONSTRAINED_EQUALITY: return "__cpp_lib_constrained_equality";
        case MacroTokenKind::__CPP_LIB_CONTAINERS_RANGES: return "__cpp_lib_containers_ranges";
        case MacroTokenKind::__CPP_LIB_COPYABLE_FUNCTION: return "__cpp_lib_copyable_function";
        case MacroTokenKind::__CPP_LIB_COROUTINE: return "__cpp_lib_coroutine";
        case MacroTokenKind::__CPP_LIB_DEBUGGING: return "__cpp_lib_debugging";
        case MacroTokenKind::__CPP_LIB_DESTROYING_DELETE: return "__cpp_lib_destroying_delete";
        case MacroTokenKind::__CPP_LIB_ENABLE_SHARED_FROM_THIS: return "__cpp_lib_enable_shared_from_this";
        case MacroTokenKind::__CPP_LIB_ENDIAN: return "__cpp_lib_endian";
        case MacroTokenKind::__CPP_LIB_ERASE_IF: return "__cpp_lib_erase_if";
        case MacroTokenKind::__CPP_LIB_EXCHANGE_FUNCTION: return "__cpp_lib_exchange_function";
        case MacroTokenKind::__CPP_LIB_EXECUTION: return "__cpp_lib_execution";
        case MacroTokenKind::__CPP_LIB_EXPECTED: return "__cpp_lib_expected";
        case MacroTokenKind::__CPP_LIB_FILESYSTEM: return "__cpp_lib_filesystem";
        case MacroTokenKind::__CPP_LIB_FLAT_MAP: return "__cpp_lib_flat_map";
        case MacroTokenKind::__CPP_LIB_FLAT_SET: return "__cpp_lib_flat_set";
        case MacroTokenKind::__CPP_LIB_FORMAT: return "__cpp_lib_format";
        case MacroTokenKind::__CPP_LIB_FORMAT_PATH: return "__cpp_lib_format_path";
        case MacroTokenKind::__CPP_LIB_FORMAT_RANGES: return "__cpp_lib_format_ranges";
        case MacroTokenKind::__CPP_LIB_FORMATTERS: return "__cpp_lib_formatters";
        case MacroTokenKind::__CPP_LIB_FORWARD_LIKE: return "__cpp_lib_forward_like";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_CHAR_TRAITS: return "__cpp_lib_freestanding_char_traits";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_CHARCONV: return "__cpp_lib_freestanding_charconv";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_CSTDLIB: return "__cpp_lib_freestanding_cstdlib";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_CSTRING: return "__cpp_lib_freestanding_cstring";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_CWCHAR: return "__cpp_lib_freestanding_cwchar";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_ERRC: return "__cpp_lib_freestanding_errc";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_FEATURE_TEST_MACROS: return "__cpp_lib_freestanding_feature_test_macros";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_FUNCTIONAL: return "__cpp_lib_freestanding_functional";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_ITERATOR: return "__cpp_lib_freestanding_iterator";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_MEMORY: return "__cpp_lib_freestanding_memory";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_OPERATOR_NEW: return "__cpp_lib_freestanding_operator_new";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_RANGES: return "__cpp_lib_freestanding_ranges";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_RATIO: return "__cpp_lib_freestanding_ratio";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_TUPLE: return "__cpp_lib_freestanding_tuple";
        case MacroTokenKind::__CPP_LIB_FREESTANDING_UTILITY: return "__cpp_lib_freestanding_utility";
        case MacroTokenKind::__CPP_LIB_FSTREAM_NATIVE_HANDLE: return "__cpp_lib_fstream_native_handle";
        case MacroTokenKind::__CPP_LIB_FUNCTION_REF: return "__cpp_lib_function_ref";
        case MacroTokenKind::__CPP_LIB_GCD_LCM: return "__cpp_lib_gcd_lcm";
        case MacroTokenKind::__CPP_LIB_GENERATOR: return "__cpp_lib_generator";
        case MacroTokenKind::__CPP_LIB_GENERIC_ASSOCIATIVE_LOOKUP: return "__cpp_lib_generic_associative_lookup";
        case MacroTokenKind::__CPP_LIB_GENERIC_UNORDERED_LOOKUP: return "__cpp_lib_generic_unordered_lookup";
        case MacroTokenKind::__CPP_LIB_HARDWARE_INTERFERENCE_SIZE: return "__cpp_lib_hardware_interference_size";
        case MacroTokenKind::__CPP_LIB_HAS_UNIQUE_OBJECT_REPRESENTATIONS: return "__cpp_lib_has_unique_object_representations";
        case MacroTokenKind::__CPP_LIB_HAZARD_POINTER: return "__cpp_lib_hazard_pointer";
        case MacroTokenKind::__CPP_LIB_HYPOT: return "__cpp_lib_hypot";
        case MacroTokenKind::__CPP_LIB_INCOMPLETE_CONTAINER_ELEMENTS: return "__cpp_lib_incomplete_container_elements";
        case MacroTokenKind::__CPP_LIB_INT_POW2: return "__cpp_lib_int_pow2";
        case MacroTokenKind::__CPP_LIB_INTEGER_COMPARISON_FUNCTIONS: return "__cpp_lib_integer_comparison_functions";
        case MacroTokenKind::__CPP_LIB_INTEGER_SEQUENCE: return "__cpp_lib_integer_sequence";
        case MacroTokenKind::__CPP_LIB_INTEGRAL_CONSTANT_CALLABLE: return "__cpp_lib_integral_constant_callable";
        case MacroTokenKind::__CPP_LIB_INTERPOLATE: return "__cpp_lib_interpolate";
        case MacroTokenKind::__CPP_LIB_INVOKE: return "__cpp_lib_invoke";
        case MacroTokenKind::__CPP_LIB_INVOKE_R: return "__cpp_lib_invoke_r";
        case MacroTokenKind::__CPP_LIB_IOS_NOREPLACE: return "__cpp_lib_ios_noreplace";
        case MacroTokenKind::__CPP_LIB_IS_AGGREGATE: return "__cpp_lib_is_aggregate";
        case MacroTokenKind::__CPP_LIB_IS_CONSTANT_EVALUATED: return "__cpp_lib_is_constant_evaluated";
        case MacroTokenKind::__CPP_LIB_IS_FINAL: return "__cpp_lib_is_final";
        case MacroTokenKind::__CPP_LIB_IS_IMPLICIT_LIFETIME: return "__cpp_lib_is_implicit_lifetime";
        case MacroTokenKind::__CPP_LIB_IS_INVOCABLE: return "__cpp_lib_is_invocable";
        case MacroTokenKind::__CPP_LIB_IS_LAYOUT_COMPATIBLE: return "__cpp_lib_is_layout_compatible";
        case MacroTokenKind::__CPP_LIB_IS_NOTHROW_CONVERTIBLE: return "__cpp_lib_is_nothrow_convertible";
        case MacroTokenKind::__CPP_LIB_IS_NULL_POINTER: return "__cpp_lib_is_null_pointer";
        case MacroTokenKind::__CPP_LIB_IS_POINTER_INTERCONVERTIBLE: return "__cpp_lib_is_pointer_interconvertible";
        case MacroTokenKind::__CPP_LIB_IS_SCOPED_ENUM: return "__cpp_lib_is_scoped_enum";
        case MacroTokenKind::__CPP_LIB_IS_SWAPPABLE: return "__cpp_lib_is_swappable";
        case MacroTokenKind::__CPP_LIB_IS_WITHIN_LIFETIME: return "__cpp_lib_is_within_lifetime";
        case MacroTokenKind::__CPP_LIB_JTHREAD: return "__cpp_lib_jthread";
        case MacroTokenKind::__CPP_LIB_LATCH: return "__cpp_lib_latch";
        case MacroTokenKind::__CPP_LIB_LAUNDER: return "__cpp_lib_launder";
        case MacroTokenKind::__CPP_LIB_LIST_REMOVE_RETURN_TYPE: return "__cpp_lib_list_remove_return_type";
        case MacroTokenKind::__CPP_LIB_LOGICAL_TRAITS: return "__cpp_lib_logical_traits";
        case MacroTokenKind::__CPP_LIB_MAKE_FROM_TUPLE: return "__cpp_lib_make_from_tuple";
        case MacroTokenKind::__CPP_LIB_MAKE_REVERSE_ITERATOR: return "__cpp_lib_make_reverse_iterator";
        case MacroTokenKind::__CPP_LIB_MAKE_UNIQUE: return "__cpp_lib_make_unique";
        case MacroTokenKind::__CPP_LIB_MAP_TRY_EMPLACE: return "__cpp_lib_map_try_emplace";
        case MacroTokenKind::__CPP_LIB_MATH_CONSTANTS: return "__cpp_lib_math_constants";
        case MacroTokenKind::__CPP_LIB_MATH_SPECIAL_FUNCTIONS: return "__cpp_lib_math_special_functions";
        case MacroTokenKind::__CPP_LIB_MDSPAN: return "__cpp_lib_mdspan";
        case MacroTokenKind::__CPP_LIB_MEMORY_RESOURCE: return "__cpp_lib_memory_resource";
        case MacroTokenKind::__CPP_LIB_MODULES: return "__cpp_lib_modules";
        case MacroTokenKind::__CPP_LIB_MOVE_ITERATOR_CONCEPT: return "__cpp_lib_move_iterator_concept";
        case MacroTokenKind::__CPP_LIB_MOVE_ONLY_FUNCTION: return "__cpp_lib_move_only_function";
        case MacroTokenKind::__CPP_LIB_NODE_EXTRACT: return "__cpp_lib_node_extract";
        case MacroTokenKind::__CPP_LIB_NONMEMBER_CONTAINER_ACCESS: return "__cpp_lib_nonmember_container_access";
        case MacroTokenKind::__CPP_LIB_NOT_FN: return "__cpp_lib_not_fn";
        case MacroTokenKind::__CPP_LIB_NULL_ITERATORS: return "__cpp_lib_null_iterators";
        case MacroTokenKind::__CPP_LIB_OPTIONAL: return "__cpp_lib_optional";
        case MacroTokenKind::__CPP_LIB_OUT_PTR: return "__cpp_lib_out_ptr";
        case MacroTokenKind::__CPP_LIB_PARALLEL_ALGORITHM: return "__cpp_lib_parallel_algorithm";
        case MacroTokenKind::__CPP_LIB_POLYMORPHIC_ALLOCATOR: return "__cpp_lib_polymorphic_allocator";
        case MacroTokenKind::__CPP_LIB_PRINT: return "__cpp_lib_print";
        case MacroTokenKind::__CPP_LIB_QUOTED_STRING_IO: return "__cpp_lib_quoted_string_io";
        case MacroTokenKind::__CPP_LIB_RANGES: return "__cpp_lib_ranges";
        case MacroTokenKind::__CPP_LIB_RANGES_AS_CONST: return "__cpp_lib_ranges_as_const";
        case MacroTokenKind::__CPP_LIB_RANGES_AS_RVALUE: return "__cpp_lib_ranges_as_rvalue";
        case MacroTokenKind::__CPP_LIB_RANGES_CARTESIAN_PRODUCT: return "__cpp_lib_ranges_cartesian_product";
        case MacroTokenKind::__CPP_LIB_RANGES_CHUNK: return "__cpp_lib_ranges_chunk";
        case MacroTokenKind::__CPP_LIB_RANGES_CHUNK_BY: return "__cpp_lib_ranges_chunk_by";
        case MacroTokenKind::__CPP_LIB_RANGES_CONCAT: return "__cpp_lib_ranges_concat";
        case MacroTokenKind::__CPP_LIB_RANGES_CONTAINS: return "__cpp_lib_ranges_contains";
        case MacroTokenKind::__CPP_LIB_RANGES_ENUMERATE: return "__cpp_lib_ranges_enumerate";
        case MacroTokenKind::__CPP_LIB_RANGES_FIND_LAST: return "__cpp_lib_ranges_find_last";
        case MacroTokenKind::__CPP_LIB_RANGES_FOLD: return "__cpp_lib_ranges_fold";
        case MacroTokenKind::__CPP_LIB_RANGES_GENERATE_RANDOM: return "__cpp_lib_ranges_generate_random";
        case MacroTokenKind::__CPP_LIB_RANGES_IOTA: return "__cpp_lib_ranges_iota";
        case MacroTokenKind::__CPP_LIB_RANGES_JOIN_WITH: return "__cpp_lib_ranges_join_with";
        case MacroTokenKind::__CPP_LIB_RANGES_REPEAT: return "__cpp_lib_ranges_repeat";
        case MacroTokenKind::__CPP_LIB_RANGES_SLIDE: return "__cpp_lib_ranges_slide";
        case MacroTokenKind::__CPP_LIB_RANGES_STARTS_ENDS_WITH: return "__cpp_lib_ranges_starts_ends_with";
        case MacroTokenKind::__CPP_LIB_RANGES_STRIDE: return "__cpp_lib_ranges_stride";
        case MacroTokenKind::__CPP_LIB_RANGES_TO_CONTAINER: return "__cpp_lib_ranges_to_container";
        case MacroTokenKind::__CPP_LIB_RANGES_ZIP: return "__cpp_lib_ranges_zip";
        case MacroTokenKind::__CPP_LIB_RATIO: return "__cpp_lib_ratio";
        case MacroTokenKind::__CPP_LIB_RAW_MEMORY_ALGORITHMS: return "__cpp_lib_raw_memory_algorithms";
        case MacroTokenKind::__CPP_LIB_RCU: return "__cpp_lib_rcu";
        case MacroTokenKind::__CPP_LIB_REFERENCE_FROM_TEMPORARY: return "__cpp_lib_reference_from_temporary";
        case MacroTokenKind::__CPP_LIB_REFERENCE_WRAPPER: return "__cpp_lib_reference_wrapper";
        case MacroTokenKind::__CPP_LIB_REMOVE_CVREF: return "__cpp_lib_remove_cvref";
        case MacroTokenKind::__CPP_LIB_RESULT_OF_SFINAE: return "__cpp_lib_result_of_sfinae";
        case MacroTokenKind::__CPP_LIB_ROBUST_NONMODIFYING_SEQ_OPS: return "__cpp_lib_robust_nonmodifying_seq_ops";
        case MacroTokenKind::__CPP_LIB_SAMPLE: return "__cpp_lib_sample";
        case MacroTokenKind::__CPP_LIB_SCOPED_LOCK: return "__cpp_lib_scoped_lock";
        case MacroTokenKind::__CPP_LIB_SEMAPHORE: return "__cpp_lib_semaphore";
        case MacroTokenKind::__CPP_LIB_SHARED_MUTEX: return "__cpp_lib_shared_mutex";
        case MacroTokenKind::__CPP_LIB_SHARED_PTR_ARRAYS: return "__cpp_lib_shared_ptr_arrays";
        case MacroTokenKind::__CPP_LIB_SHARED_PTR_WEAK_TYPE: return "__cpp_lib_shared_ptr_weak_type";
        case MacroTokenKind::__CPP_LIB_SHARED_TIMED_MUTEX: return "__cpp_lib_shared_timed_mutex";
        case MacroTokenKind::__CPP_LIB_SHIFT: return "__cpp_lib_shift";
        case MacroTokenKind::__CPP_LIB_SMART_PTR_FOR_OVERWRITE: return "__cpp_lib_smart_ptr_for_overwrite";
        case MacroTokenKind::__CPP_LIB_SMART_PTR_OWNER_EQUALITY: return "__cpp_lib_smart_ptr_owner_equality";
        case MacroTokenKind::__CPP_LIB_SOURCE_LOCATION: return "__cpp_lib_source_location";
        case MacroTokenKind::__CPP_LIB_SPAN: return "__cpp_lib_span";
        case MacroTokenKind::__CPP_LIB_SPANSTREAM: return "__cpp_lib_spanstream";
        case MacroTokenKind::__CPP_LIB_SSIZE: return "__cpp_lib_ssize";
        case MacroTokenKind::__CPP_LIB_SSTREAM_FROM_STRING_VIEW: return "__cpp_lib_sstream_from_string_view";
        case MacroTokenKind::__CPP_LIB_STACKTRACE: return "__cpp_lib_stacktrace";
        case MacroTokenKind::__CPP_LIB_START_LIFETIME_AS: return "__cpp_lib_start_lifetime_as";
        case MacroTokenKind::__CPP_LIB_STARTS_ENDS_WITH: return "__cpp_lib_starts_ends_with";
        case MacroTokenKind::__CPP_LIB_STDATOMIC_H: return "__cpp_lib_stdatomic_h";
        case MacroTokenKind::__CPP_LIB_STRING_CONTAINS: return "__cpp_lib_string_contains";
        case MacroTokenKind::__CPP_LIB_STRING_RESIZE_AND_OVERWRITE: return "__cpp_lib_string_resize_and_overwrite";
        case MacroTokenKind::__CPP_LIB_STRING_UDLS: return "__cpp_lib_string_udls";
        case MacroTokenKind::__CPP_LIB_STRING_VIEW: return "__cpp_lib_string_view";
        case MacroTokenKind::__CPP_LIB_SUBMDSPAN: return "__cpp_lib_submdspan";
        case MacroTokenKind::__CPP_LIB_SYNCBUF: return "__cpp_lib_syncbuf";
        case MacroTokenKind::__CPP_LIB_TEXT_ENCODING: return "__cpp_lib_text_encoding";
        case MacroTokenKind::__CPP_LIB_THREE_WAY_COMPARISON: return "__cpp_lib_three_way_comparison";
        case MacroTokenKind::__CPP_LIB_TO_ADDRESS: return "__cpp_lib_to_address";
        case MacroTokenKind::__CPP_LIB_TO_ARRAY: return "__cpp_lib_to_array";
        case MacroTokenKind::__CPP_LIB_TO_CHARS: return "__cpp_lib_to_chars";
        case MacroTokenKind::__CPP_LIB_TO_STRING: return "__cpp_lib_to_string";
        case MacroTokenKind::__CPP_LIB_TO_UNDERLYING: return "__cpp_lib_to_underlying";
        case MacroTokenKind::__CPP_LIB_TRANSFORMATION_TRAIT_ALIASES: return "__cpp_lib_transformation_trait_aliases";
        case MacroTokenKind::__CPP_LIB_TRANSPARENT_OPERATORS: return "__cpp_lib_transparent_operators";
        case MacroTokenKind::__CPP_LIB_TUPLE_ELEMENT_T: return "__cpp_lib_tuple_element_t";
        case MacroTokenKind::__CPP_LIB_TUPLE_LIKE: return "__cpp_lib_tuple_like";
        case MacroTokenKind::__CPP_LIB_TUPLES_BY_TYPE: return "__cpp_lib_tuples_by_type";
        case MacroTokenKind::__CPP_LIB_TYPE_IDENTITY: return "__cpp_lib_type_identity";
        case MacroTokenKind::__CPP_LIB_TYPE_TRAIT_VARIABLE_TEMPLATES: return "__cpp_lib_type_trait_variable_templates";
        case MacroTokenKind::__CPP_LIB_UNCAUGHT_EXCEPTIONS: return "__cpp_lib_uncaught_exceptions";
        case MacroTokenKind::__CPP_LIB_UNORDERED_MAP_TRY_EMPLACE: return "__cpp_lib_unordered_map_try_emplace";
        case MacroTokenKind::__CPP_LIB_UNREACHABLE: return "__cpp_lib_unreachable";
        case MacroTokenKind::__CPP_LIB_UNWRAP_REF: return "__cpp_lib_unwrap_ref";
        case MacroTokenKind::__CPP_LIB_VARIANT: return "__cpp_lib_variant";
        case MacroTokenKind::__CPP_LIB_VOID_T: return "__cpp_lib_void_t";
        case MacroTokenKind::_ATOMIC: return "_Atomic";
        case MacroTokenKind::_IOFB: return "_IOFB";
        case MacroTokenKind::_IOLB: return "_IOLB";
        case MacroTokenKind::_IONB: return "_IONB";
        case MacroTokenKind::ASSERT: return "assert";
        case MacroTokenKind::ATOMIC_BOOL_LOCK_FREE: return "ATOMIC_BOOL_LOCK_FREE";
        case MacroTokenKind::ATOMIC_CHAR_LOCK_FREE: return "ATOMIC_CHAR_LOCK_FREE";
        case MacroTokenKind::ATOMIC_CHAR16_T_LOCK_FREE: return "ATOMIC_CHAR16_T_LOCK_FREE";
        case MacroTokenKind::ATOMIC_CHAR32_T_LOCK_FREE: return "ATOMIC_CHAR32_T_LOCK_FREE";
        case MacroTokenKind::ATOMIC_CHAR8_T_LOCK_FREE: return "ATOMIC_CHAR8_T_LOCK_FREE";
        case MacroTokenKind::ATOMIC_FLAG_INIT: return "ATOMIC_FLAG_INIT";
        case MacroTokenKind::ATOMIC_INT_LOCK_FREE: return "ATOMIC_INT_LOCK_FREE";
        case MacroTokenKind::ATOMIC_LLONG_LOCK_FREE: return "ATOMIC_LLONG_LOCK_FREE";
        case MacroTokenKind::ATOMIC_LONG_LOCK_FREE: return "ATOMIC_LONG_LOCK_FREE";
        case MacroTokenKind::ATOMIC_POINTER_LOCK_FREE: return "ATOMIC_POINTER_LOCK_FREE";
        case MacroTokenKind::ATOMIC_SHORT_LOCK_FREE: return "ATOMIC_SHORT_LOCK_FREE";
        case MacroTokenKind::ATOMIC_VAR_INIT: return "ATOMIC_VAR_INIT";
        case MacroTokenKind::ATOMIC_WCHAR_T_LOCK_FREE: return "ATOMIC_WCHAR_T_LOCK_FREE";
        case MacroTokenKind::_BUFSIZ: return "BUFSIZ";
        case MacroTokenKind::CHAR_BIT: return "CHAR_BIT";
        case MacroTokenKind::CHAR_MAX: return "CHAR_MAX";
        case MacroTokenKind::CHAR_MIN: return "CHAR_MIN";
        case MacroTokenKind::CLOCKS_PER_SEC: return "CLOCKS_PER_SEC";
        case MacroTokenKind::DBL_DECIMAL_DIG: return "DBL_DECIMAL_DIG";
        case MacroTokenKind::DBL_DIG: return "DBL_DIG";
        case MacroTokenKind::DBL_EPSILON: return "DBL_EPSILON";
        case MacroTokenKind::DBL_HAS_SUBNORM: return "DBL_HAS_SUBNORM";
        case MacroTokenKind::DBL_MANT_DIG: return "DBL_MANT_DIG";
        case MacroTokenKind::DBL_MAX: return "DBL_MAX";
        case MacroTokenKind::DBL_MAX_10_EXP: return "DBL_MAX_10_EXP";
        case MacroTokenKind::DBL_MAX_EXP: return "DBL_MAX_EXP";
        case MacroTokenKind::DBL_MIN: return "DBL_MIN";
        case MacroTokenKind::DBL_MIN_10_EXP: return "DBL_MIN_10_EXP";
        case MacroTokenKind::DBL_MIN_EXP: return "DBL_MIN_EXP";
        case MacroTokenKind::DBL_TRUE_MIN: return "DBL_TRUE_MIN";
        case MacroTokenKind::DECIMAL_DIG: return "DECIMAL_DIG";
        case MacroTokenKind::_E2BIG: return "E2BIG";
        case MacroTokenKind::_EACCES: return "EACCES";
        case MacroTokenKind::_EADDRINUSE: return "EADDRINUSE";
        case MacroTokenKind::_EADDRNOTAVAIL: return "EADDRNOTAVAIL";
        case MacroTokenKind::_EAFNOSUPPORT: return "EAFNOSUPPORT";
        case MacroTokenKind::_EAGAIN: return "EAGAIN";
        case MacroTokenKind::_EALREADY: return "EALREADY";
        case MacroTokenKind::_EBADF: return "EBADF";
        case MacroTokenKind::_EBADMSG: return "EBADMSG";
        case MacroTokenKind::_EBUSY: return "EBUSY";
        case MacroTokenKind::_ECANCELED: return "ECANCELED";
        case MacroTokenKind::_ECHILD: return "ECHILD";
        case MacroTokenKind::_ECONNABORTED: return "ECONNABORTED";
        case MacroTokenKind::_ECONNREFUSED: return "ECONNREFUSED";
        case MacroTokenKind::_ECONNRESET: return "ECONNRESET";
        case MacroTokenKind::_EDEADLK: return "EDEADLK";
        case MacroTokenKind::_EDESTADDRREQ: return "EDESTADDRREQ";
        case MacroTokenKind::_EDOM: return "EDOM";
        case MacroTokenKind::_EEXIST: return "EEXIST";
        case MacroTokenKind::_EFAULT: return "EFAULT";
        case MacroTokenKind::_EFBIG: return "EFBIG";
        case MacroTokenKind::_EHOSTUNREACH: return "EHOSTUNREACH";
        case MacroTokenKind::_EIDRM: return "EIDRM";
        case MacroTokenKind::_EILSEQ: return "EILSEQ";
        case MacroTokenKind::_EINPROGRESS: return "EINPROGRESS";
        case MacroTokenKind::_EINTR: return "EINTR";
        case MacroTokenKind::_EINVAL: return "EINVAL";
        case MacroTokenKind::_EIO: return "EIO";
        case MacroTokenKind::_EISCONN: return "EISCONN";
        case MacroTokenKind::_EISDIR: return "EISDIR";
        case MacroTokenKind::_ELOOP: return "ELOOP";
        case MacroTokenKind::_EMFILE: return "EMFILE";
        case MacroTokenKind::_EMLINK: return "EMLINK";
        case MacroTokenKind::_EMSGSIZE: return "EMSGSIZE";
        case MacroTokenKind::_ENAMETOOLONG: return "ENAMETOOLONG";
        case MacroTokenKind::_ENETDOWN: return "ENETDOWN";
        case MacroTokenKind::_ENETRESET: return "ENETRESET";
        case MacroTokenKind::_ENETUNREACH: return "ENETUNREACH";
        case MacroTokenKind::_ENFILE: return "ENFILE";
        case MacroTokenKind::_ENOBUFS: return "ENOBUFS";
        case MacroTokenKind::_ENODATA: return "ENODATA";
        case MacroTokenKind::_ENODEV: return "ENODEV";
        case MacroTokenKind::_ENOENT: return "ENOENT";
        case MacroTokenKind::_ENOEXEC: return "ENOEXEC";
        case MacroTokenKind::_ENOLCK: return "ENOLCK";
        case MacroTokenKind::_ENOLINK: return "ENOLINK";
        case MacroTokenKind::_ENOMEM: return "ENOMEM";
        case MacroTokenKind::_ENOMSG: return "ENOMSG";
        case MacroTokenKind::_ENOPROTOOPT: return "ENOPROTOOPT";
        case MacroTokenKind::_ENOSPC: return "ENOSPC";
        case MacroTokenKind::_ENOSR: return "ENOSR";
        case MacroTokenKind::_ENOSTR: return "ENOSTR";
        case MacroTokenKind::_ENOSYS: return "ENOSYS";
        case MacroTokenKind::_ENOTCONN: return "ENOTCONN";
        case MacroTokenKind::_ENOTDIR: return "ENOTDIR";
        case MacroTokenKind::_ENOTEMPTY: return "ENOTEMPTY";
        case MacroTokenKind::_ENOTRECOVERABLE: return "ENOTRECOVERABLE";
        case MacroTokenKind::_ENOTSOCK: return "ENOTSOCK";
        case MacroTokenKind::_ENOTSUP: return "ENOTSUP";
        case MacroTokenKind::_ENOTTY: return "ENOTTY";
        case MacroTokenKind::_ENXIO: return "ENXIO";
        case MacroTokenKind::_EOF: return "EOF";
        case MacroTokenKind::_EOPNOTSUPP: return "EOPNOTSUPP";
        case MacroTokenKind::_EOVERFLOW: return "EOVERFLOW";
        case MacroTokenKind::_EOWNERDEAD: return "EOWNERDEAD";
        case MacroTokenKind::_EPERM: return "EPERM";
        case MacroTokenKind::_EPIPE: return "EPIPE";
        case MacroTokenKind::_EPROTO: return "EPROTO";
        case MacroTokenKind::_EPROTONOSUPPORT: return "EPROTONOSUPPORT";
        case MacroTokenKind::_EPROTOTYPE: return "EPROTOTYPE";
        case MacroTokenKind::_ERANGE: return "ERANGE";
        case MacroTokenKind::_EROFS: return "EROFS";
        case MacroTokenKind::_ERRNO: return "errno";
        case MacroTokenKind::_ESPIPE: return "ESPIPE";
        case MacroTokenKind::_ESRCH: return "ESRCH";
        case MacroTokenKind::_ETIME: return "ETIME";
        case MacroTokenKind::_ETIMEDOUT: return "ETIMEDOUT";
        case MacroTokenKind::_ETXTBSY: return "ETXTBSY";
        case MacroTokenKind::_EWOULDBLOCK: return "EWOULDBLOCK";
        case MacroTokenKind::_EXDEV: return "EXDEV";
        case MacroTokenKind::_EXIT_FAILURE: return "EXIT_FAILURE";
        case MacroTokenKind::_EXIT_SUCCESS: return "EXIT_SUCCESS";
        case MacroTokenKind::FE_ALL_EXCEPT: return "FE_ALL_EXCEPT";
        case MacroTokenKind::FE_DFL_ENV: return "FE_DFL_ENV";
        case MacroTokenKind::FE_DIVBYZERO: return "FE_DIVBYZERO";
        case MacroTokenKind::FE_DOWNWARD: return "FE_DOWNWARD";
        case MacroTokenKind::FE_INEXACT: return "FE_INEXACT";
        case MacroTokenKind::FE_INVALID: return "FE_INVALID";
        case MacroTokenKind::FE_OVERFLOW: return "FE_OVERFLOW";
        case MacroTokenKind::FE_TONEAREST: return "FE_TONEAREST";
        case MacroTokenKind::FE_TOWARDZERO: return "FE_TOWARDZERO";
        case MacroTokenKind::FE_UNDERFLOW: return "FE_UNDERFLOW";
        case MacroTokenKind::FE_UPWARD: return "FE_UPWARD";
        case MacroTokenKind::_FILENAME_MAX: return "FILENAME_MAX";
        case MacroTokenKind::FLT_DECIMAL_DIG: return "FLT_DECIMAL_DIG";
        case MacroTokenKind::FLT_DIG: return "FLT_DIG";
        case MacroTokenKind::FLT_EPSILON: return "FLT_EPSILON";
        case MacroTokenKind::FLT_EVAL_METHOD: return "FLT_EVAL_METHOD";
        case MacroTokenKind::FLT_HAS_SUBNORM: return "FLT_HAS_SUBNORM";
        case MacroTokenKind::FLT_MANT_DIG: return "FLT_MANT_DIG";
        case MacroTokenKind::FLT_MAX: return "FLT_MAX";
        case MacroTokenKind::FLT_MAX_10_EXP: return "FLT_MAX_10_EXP";
        case MacroTokenKind::FLT_MAX_EXP: return "FLT_MAX_EXP";
        case MacroTokenKind::FLT_MIN: return "FLT_MIN";
        case MacroTokenKind::FLT_MIN_10_EXP: return "FLT_MIN_10_EXP";
        case MacroTokenKind::FLT_MIN_EXP: return "FLT_MIN_EXP";
        case MacroTokenKind::FLT_RADIX: return "FLT_RADIX";
        case MacroTokenKind::FLT_ROUNDS: return "FLT_ROUNDS";
        case MacroTokenKind::FLT_TRUE_MIN: return "FLT_TRUE_MIN";
        case MacroTokenKind::_FOPEN_MAX: return "FOPEN_MAX";
        case MacroTokenKind::FP_FAST_FMA: return "FP_FAST_FMA";
        case MacroTokenKind::FP_FAST_FMAF: return "FP_FAST_FMAF";
        case MacroTokenKind::FP_FAST_FMAL: return "FP_FAST_FMAL";
        case MacroTokenKind::FP_ILOGB0: return "FP_ILOGB0";
        case MacroTokenKind::FP_ILOGBNAN: return "FP_ILOGBNAN";
        case MacroTokenKind::FP_SUBNORMAL: return "FP_SUBNORMAL";
        case MacroTokenKind::FP_ZERO: return "FP_ZERO";
        case MacroTokenKind::FP_INFINITE: return "FP_INFINITE";
        case MacroTokenKind::FP_NAN: return "FP_NAN";
        case MacroTokenKind::FP_NORMAL: return "FP_NORMAL";
        case MacroTokenKind::HUGE_VAL: return "HUGE_VAL";
        case MacroTokenKind::HUGE_VALF: return "HUGE_VALF";
        case MacroTokenKind::HUGE_VALL: return "HUGE_VALL";
        case MacroTokenKind::INFINITY: return "INFINITY";
        case MacroTokenKind::INT_FAST16_MAX: return "INT_FAST16_MAX";
        case MacroTokenKind::INT_FAST16_MIN: return "INT_FAST16_MIN";
        case MacroTokenKind::INT_FAST32_MAX: return "INT_FAST32_MAX";
        case MacroTokenKind::INT_FAST32_MIN: return "INT_FAST32_MIN";
        case MacroTokenKind::INT_FAST64_MAX: return "INT_FAST64_MAX";
        case MacroTokenKind::INT_FAST64_MIN: return "INT_FAST64_MIN";
        case MacroTokenKind::INT_FAST8_MAX: return "INT_FAST8_MAX";
        case MacroTokenKind::INT_FAST8_MIN: return "INT_FAST8_MIN";
        case MacroTokenKind::INT_LEAST16_MAX: return "INT_LEAST16_MAX";
        case MacroTokenKind::INT_LEAST16_MIN: return "INT_LEAST16_MIN";
        case MacroTokenKind::INT_LEAST32_MAX: return "INT_LEAST32_MAX";
        case MacroTokenKind::INT_LEAST32_MIN: return "INT_LEAST32_MIN";
        case MacroTokenKind::INT_LEAST64_MAX: return "INT_LEAST64_MAX";
        case MacroTokenKind::INT_LEAST64_MIN: return "INT_LEAST64_MIN";
        case MacroTokenKind::INT_LEAST8_MAX: return "INT_LEAST8_MAX";
        case MacroTokenKind::INT_LEAST8_MIN: return "INT_LEAST8_MIN";
        case MacroTokenKind::INT_MAX: return "INT_MAX";
        case MacroTokenKind::INT_MIN: return "INT_MIN";
        case MacroTokenKind::INT16_C: return "INT16_C";
        case MacroTokenKind::INT16_MAX: return "INT16_MAX";
        case MacroTokenKind::INT16_MIN: return "INT16_MIN";
        case MacroTokenKind::INT32_C: return "INT32_C";
        case MacroTokenKind::INT32_MAX: return "INT32_MAX";
        case MacroTokenKind::INT32_MIN: return "INT32_MIN";
        case MacroTokenKind::INT64_C: return "INT64_C";
        case MacroTokenKind::INT64_MAX: return "INT64_MAX";
        case MacroTokenKind::INT64_MIN: return "INT64_MIN";
        case MacroTokenKind::INT8_C: return "INT8_C";
        case MacroTokenKind::INT8_MAX: return "INT8_MAX";
        case MacroTokenKind::INT8_MIN: return "INT8_MIN";
        case MacroTokenKind::INTMAX_C: return "INTMAX_C";
        case MacroTokenKind::INTMAX_MAX: return "INTMAX_MAX";
        case MacroTokenKind::INTMAX_MIN: return "INTMAX_MIN";
        case MacroTokenKind::INTPTR_MAX: return "INTPTR_MAX";
        case MacroTokenKind::INTPTR_MIN: return "INTPTR_MIN";
        case MacroTokenKind::L_TMPNAM: return "L_tmpnam";
        case MacroTokenKind::_LC_ALL: return "LC_ALL";
        case MacroTokenKind::_LC_COLLATE: return "LC_COLLATE";
        case MacroTokenKind::_LC_CTYPE: return "LC_CTYPE";
        case MacroTokenKind::_LC_MONETARY: return "LC_MONETARY";
        case MacroTokenKind::_LC_NUMERIC: return "LC_NUMERIC";
        case MacroTokenKind::_LC_TIME: return "LC_TIME";
        case MacroTokenKind::LDBL_DECIMAL_DIG: return "LDBL_DECIMAL_DIG";
        case MacroTokenKind::LDBL_DIG: return "LDBL_DIG";
        case MacroTokenKind::LDBL_EPSILON: return "LDBL_EPSILON";
        case MacroTokenKind::LDBL_HAS_SUBNORM: return "LDBL_HAS_SUBNORM";
        case MacroTokenKind::LDBL_MANT_DIG: return "LDBL_MANT_DIG";
        case MacroTokenKind::LDBL_MAX: return "LDBL_MAX";
        case MacroTokenKind::LDBL_MAX_10_EXP: return "LDBL_MAX_10_EXP";
        case MacroTokenKind::LDBL_MAX_EXP: return "LDBL_MAX_EXP";
        case MacroTokenKind::LDBL_MIN: return "LDBL_MIN";
        case MacroTokenKind::LDBL_MIN_10_EXP: return "LDBL_MIN_10_EXP";
        case MacroTokenKind::LDBL_MIN_EXP: return "LDBL_MIN_EXP";
        case MacroTokenKind::LDBL_TRUE_MIN: return "LDBL_TRUE_MIN";
        case MacroTokenKind::LLONG_MAX: return "LLONG_MAX";
        case MacroTokenKind::LLONG_MIN: return "LLONG_MIN";
        case MacroTokenKind::LONG_MAX: return "LONG_MAX";
        case MacroTokenKind::LONG_MIN: return "LONG_MIN";
        case MacroTokenKind::MATH_ERREXCEPT: return "MATH_ERREXCEPT";
        case MacroTokenKind::MATH_ERRHANDLING: return "math_errhandling";
        case MacroTokenKind::MATH_ERRNO: return "MATH_ERRNO";
        case MacroTokenKind::_MB_CUR_MAX: return "MB_CUR_MAX";
        case MacroTokenKind::MB_LEN_MAX: return "MB_LEN_MAX";
        case MacroTokenKind::NAN: return "NAN";
        case MacroTokenKind::_NULL: return "NULL";
        case MacroTokenKind::OFFSETOF: return "offsetof";
        case MacroTokenKind::ONCE_FLAG_INIT: return "ONCE_FLAG_INIT";
        case MacroTokenKind::PRID16: return "PRId16";
        case MacroTokenKind::PRID32: return "PRId32";
        case MacroTokenKind::PRID64: return "PRId64";
        case MacroTokenKind::PRID8: return "PRId8";
        case MacroTokenKind::PRIDFAST16: return "PRIdFAST16";
        case MacroTokenKind::PRIDFAST32: return "PRIdFAST32";
        case MacroTokenKind::PRIDFAST64: return "PRIdFAST64";
        case MacroTokenKind::PRIDFAST8: return "PRIdFAST8";
        case MacroTokenKind::PRIDLEAST16: return "PRIdLEAST16";
        case MacroTokenKind::PRIDLEAST32: return "PRIdLEAST32";
        case MacroTokenKind::PRIDLEAST64: return "PRIdLEAST64";
        case MacroTokenKind::PRIDLEAST8: return "PRIdLEAST8";
        case MacroTokenKind::PRIDMAX: return "PRIdMAX";
        case MacroTokenKind::PRIDPTR: return "PRIdPTR";
        case MacroTokenKind::PRII16: return "PRIi16";
        case MacroTokenKind::PRII32: return "PRIi32";
        case MacroTokenKind::PRII64: return "PRIi64";
        case MacroTokenKind::PRII8: return "PRIi8";
        case MacroTokenKind::PRIIFAST16: return "PRIiFAST16";
        case MacroTokenKind::PRIIFAST32: return "PRIiFAST32";
        case MacroTokenKind::PRIIFAST64: return "PRIiFAST64";
        case MacroTokenKind::PRIIFAST8: return "PRIiFAST8";
        case MacroTokenKind::PRIILEAST16: return "PRIiLEAST16";
        case MacroTokenKind::PRIILEAST32: return "PRIiLEAST32";
        case MacroTokenKind::PRIILEAST64: return "PRIiLEAST64";
        case MacroTokenKind::PRIILEAST8: return "PRIiLEAST8";
        case MacroTokenKind::PRIIMAX: return "PRIiMAX";
        case MacroTokenKind::PRIIPTR: return "PRIiPTR";
        case MacroTokenKind::PRIO16: return "PRIo16";
        case MacroTokenKind::PRIO32: return "PRIo32";
        case MacroTokenKind::PRIO64: return "PRIo64";
        case MacroTokenKind::PRIO8: return "PRIo8";
        case MacroTokenKind::PRIOFAST16: return "PRIoFAST16";
        case MacroTokenKind::PRIOFAST32: return "PRIoFAST32";
        case MacroTokenKind::PRIOFAST64: return "PRIoFAST64";
        case MacroTokenKind::PRIOFAST8: return "PRIoFAST8";
        case MacroTokenKind::PRIOLEAST16: return "PRIoLEAST16";
        case MacroTokenKind::PRIOLEAST32: return "PRIoLEAST32";
        case MacroTokenKind::PRIOLEAST64: return "PRIoLEAST64";
        case MacroTokenKind::PRIOLEAST8: return "PRIoLEAST8";
        case MacroTokenKind::PRIOMAX: return "PRIoMAX";
        case MacroTokenKind::PRIOPTR: return "PRIoPTR";
        case MacroTokenKind::PRIU16: return "PRIu16";
        case MacroTokenKind::PRIU32: return "PRIu32";
        case MacroTokenKind::PRIU64: return "PRIu64";
        case MacroTokenKind::PRIU8: return "PRIu8";
        case MacroTokenKind::PRIUFAST16: return "PRIuFAST16";
        case MacroTokenKind::PRIUFAST32: return "PRIuFAST32";
        case MacroTokenKind::PRIUFAST64: return "PRIuFAST64";
        case MacroTokenKind::PRIUFAST8: return "PRIuFAST8";
        case MacroTokenKind::PRIULEAST16: return "PRIuLEAST16";
        case MacroTokenKind::PRIULEAST32: return "PRIuLEAST32";
        case MacroTokenKind::PRIULEAST64: return "PRIuLEAST64";
        case MacroTokenKind::PRIULEAST8: return "PRIuLEAST8";
        case MacroTokenKind::PRIUMAX: return "PRIuMAX";
        case MacroTokenKind::PRIUPTR: return "PRIuPTR";
        case MacroTokenKind::PRIX16: return "PRIx16";
        case MacroTokenKind::_PRIX16: return "PRIX16";
        case MacroTokenKind::_PRIX32: return "PRIx32";
        case MacroTokenKind::PRIX32: return "PRIX32";
        case MacroTokenKind::PRIX64: return "PRIx64";
        case MacroTokenKind::_PRIX64: return "PRIX64";
        case MacroTokenKind::PRIX8: return "PRIx8";
        case MacroTokenKind::_PRIX8: return "PRIX8";
        case MacroTokenKind::PRIXFAST16: return "PRIxFAST16";
        case MacroTokenKind::_PRIXFAST16: return "PRIXFAST16";
        case MacroTokenKind::PRIXFAST32: return "PRIxFAST32";
        case MacroTokenKind::_PRIXFAST32: return "PRIXFAST32";
        case MacroTokenKind::PRIXFAST64: return "PRIxFAST64";
        case MacroTokenKind::_PRIXFAST64: return "PRIXFAST64";
        case MacroTokenKind::PRIXFAST8: return "PRIxFAST8";
        case MacroTokenKind::_PRIXFAST8: return "PRIXFAST8";
        case MacroTokenKind::PRIXLEAST16: return "PRIxLEAST16";
        case MacroTokenKind::_PRIXLEAST16: return "PRIXLEAST16";
        case MacroTokenKind::PRIXLEAST32: return "PRIxLEAST32";
        case MacroTokenKind::_PRIXLEAST32: return "PRIXLEAST32";
        case MacroTokenKind::PRIXLEAST64: return "PRIxLEAST64";
        case MacroTokenKind::_PRIXLEAST64: return "PRIXLEAST64";
        case MacroTokenKind::PRIXLEAST8: return "PRIxLEAST8";
        case MacroTokenKind::_PRIXLEAST8: return "PRIXLEAST8";
        case MacroTokenKind::PRIXMAX: return "PRIxMAX";
        case MacroTokenKind::_PRIXMAX: return "PRIXMAX";
        case MacroTokenKind::PRIXPTR: return "PRIxPTR";
        case MacroTokenKind::_PRIXPTR: return "PRIXPTR";
        case MacroTokenKind::PTRDIFF_MAX: return "PTRDIFF_MAX";
        case MacroTokenKind::PTRDIFF_MIN: return "PTRDIFF_MIN";
        case MacroTokenKind::_RAND_MAX: return "RAND_MAX";
        case MacroTokenKind::SCHAR_MAX: return "SCHAR_MAX";
        case MacroTokenKind::SCHAR_MIN: return "SCHAR_MIN";
        case MacroTokenKind::SCND16: return "SCNd16";
        case MacroTokenKind::SCND32: return "SCNd32";
        case MacroTokenKind::SCND64: return "SCNd64";
        case MacroTokenKind::SCND8: return "SCNd8";
        case MacroTokenKind::SCNDFAST16: return "SCNdFAST16";
        case MacroTokenKind::SCNDFAST32: return "SCNdFAST32";
        case MacroTokenKind::SCNDFAST64: return "SCNdFAST64";
        case MacroTokenKind::SCNDFAST8: return "SCNdFAST8";
        case MacroTokenKind::SCNDLEAST16: return "SCNdLEAST16";
        case MacroTokenKind::SCNDLEAST32: return "SCNdLEAST32";
        case MacroTokenKind::SCNDLEAST64: return "SCNdLEAST64";
        case MacroTokenKind::SCNDLEAST8: return "SCNdLEAST8";
        case MacroTokenKind::SCNDMAX: return "SCNdMAX";
        case MacroTokenKind::SCNDPTR: return "SCNdPTR";
        case MacroTokenKind::SCNI16: return "SCNi16";
        case MacroTokenKind::SCNI32: return "SCNi32";
        case MacroTokenKind::SCNI64: return "SCNi64";
        case MacroTokenKind::SCNI8: return "SCNi8";
        case MacroTokenKind::SCNIFAST16: return "SCNiFAST16";
        case MacroTokenKind::SCNIFAST32: return "SCNiFAST32";
        case MacroTokenKind::SCNIFAST64: return "SCNiFAST64";
        case MacroTokenKind::SCNIFAST8: return "SCNiFAST8";
        case MacroTokenKind::SCNILEAST16: return "SCNiLEAST16";
        case MacroTokenKind::SCNILEAST32: return "SCNiLEAST32";
        case MacroTokenKind::SCNILEAST64: return "SCNiLEAST64";
        case MacroTokenKind::SCNILEAST8: return "SCNiLEAST8";
        case MacroTokenKind::SCNIMAX: return "SCNiMAX";
        case MacroTokenKind::SCNIPTR: return "SCNiPTR";
        case MacroTokenKind::SCNO16: return "SCNo16";
        case MacroTokenKind::SCNO32: return "SCNo32";
        case MacroTokenKind::SCNO64: return "SCNo64";
        case MacroTokenKind::SCNO8: return "SCNo8";
        case MacroTokenKind::SCNOFAST16: return "SCNoFAST16";
        case MacroTokenKind::SCNOFAST32: return "SCNoFAST32";
        case MacroTokenKind::SCNOFAST64: return "SCNoFAST64";
        case MacroTokenKind::SCNOFAST8: return "SCNoFAST8";
        case MacroTokenKind::SCNOLEAST16: return "SCNoLEAST16";
        case MacroTokenKind::SCNOLEAST32: return "SCNoLEAST32";
        case MacroTokenKind::SCNOLEAST64: return "SCNoLEAST64";
        case MacroTokenKind::SCNOLEAST8: return "SCNoLEAST8";
        case MacroTokenKind::SCNOMAX: return "SCNoMAX";
        case MacroTokenKind::SCNOPTR: return "SCNoPTR";
        case MacroTokenKind::SCNU16: return "SCNu16";
        case MacroTokenKind::SCNU32: return "SCNu32";
        case MacroTokenKind::SCNU64: return "SCNu64";
        case MacroTokenKind::SCNU8: return "SCNu8";
        case MacroTokenKind::SCNUFAST16: return "SCNuFAST16";
        case MacroTokenKind::SCNUFAST32: return "SCNuFAST32";
        case MacroTokenKind::SCNUFAST64: return "SCNuFAST64";
        case MacroTokenKind::SCNUFAST8: return "SCNuFAST8";
        case MacroTokenKind::SCNULEAST16: return "SCNuLEAST16";
        case MacroTokenKind::SCNULEAST32: return "SCNuLEAST32";
        case MacroTokenKind::SCNULEAST64: return "SCNuLEAST64";
        case MacroTokenKind::SCNULEAST8: return "SCNuLEAST8";
        case MacroTokenKind::SCNUMAX: return "SCNuMAX";
        case MacroTokenKind::SCNUPTR: return "SCNuPTR";
        case MacroTokenKind::SCNX16: return "SCNx16";
        case MacroTokenKind::SCNX32: return "SCNx32";
        case MacroTokenKind::SCNX64: return "SCNx64";
        case MacroTokenKind::SCNX8: return "SCNx8";
        case MacroTokenKind::SCNXFAST16: return "SCNxFAST16";
        case MacroTokenKind::SCNXFAST32: return "SCNxFAST32";
        case MacroTokenKind::SCNXFAST64: return "SCNxFAST64";
        case MacroTokenKind::SCNXFAST8: return "SCNxFAST8";
        case MacroTokenKind::SCNXLEAST16: return "SCNxLEAST16";
        case MacroTokenKind::SCNXLEAST32: return "SCNxLEAST32";
        case MacroTokenKind::SCNXLEAST64: return "SCNxLEAST64";
        case MacroTokenKind::SCNXLEAST8: return "SCNxLEAST8";
        case MacroTokenKind::SCNXMAX: return "SCNxMAX";
        case MacroTokenKind::SCNXPTR: return "SCNxPTR";
        case MacroTokenKind::_SEEK_CUR: return "SEEK_CUR";
        case MacroTokenKind::_SEEK_END: return "SEEK_END";
        case MacroTokenKind::_SEEK_SET: return "SEEK_SET";
        case MacroTokenKind::SETJMP: return "setjmp";
        case MacroTokenKind::SHRT_MAX: return "SHRT_MAX";
        case MacroTokenKind::SHRT_MIN: return "SHRT_MIN";
        case MacroTokenKind::SIG_ATOMIC_MAX: return "SIG_ATOMIC_MAX";
        case MacroTokenKind::SIG_ATOMIC_MIN: return "SIG_ATOMIC_MIN";
        case MacroTokenKind::SIG_DFL: return "SIG_DFL";
        case MacroTokenKind::SIG_ERR: return "SIG_ERR";
        case MacroTokenKind::SIG_IGN: return "SIG_IGN";
        case MacroTokenKind::SIGABRT: return "SIGABRT";
        case MacroTokenKind::SIGFPE: return "SIGFPE";
        case MacroTokenKind::SIGILL: return "SIGILL";
        case MacroTokenKind::SIGINT: return "SIGINT";
        case MacroTokenKind::SIGSEGV: return "SIGSEGV";
        case MacroTokenKind::SIGTERM: return "SIGTERM";
        case MacroTokenKind::SIZE_MAX: return "SIZE_MAX";
        case MacroTokenKind::STDERR: return "stderr";
        case MacroTokenKind::STDIN: return "stdin";
        case MacroTokenKind::STDOUT: return "stdout";
        case MacroTokenKind::TIME_UTC: return "TIME_UTC";
        case MacroTokenKind::_TMP_MAX: return "TMP_MAX";
        case MacroTokenKind::UCHAR_MAX: return "UCHAR_MAX";
        case MacroTokenKind::UINT_FAST16_MAX: return "UINT_FAST16_MAX";
        case MacroTokenKind::UINT_FAST32_MAX: return "UINT_FAST32_MAX";
        case MacroTokenKind::UINT_FAST64_MAX: return "UINT_FAST64_MAX";
        case MacroTokenKind::UINT_FAST8_MAX: return "UINT_FAST8_MAX";
        case MacroTokenKind::UINT_LEAST16_MAX: return "UINT_LEAST16_MAX";
        case MacroTokenKind::UINT_LEAST32_MAX: return "UINT_LEAST32_MAX";
        case MacroTokenKind::UINT_LEAST64_MAX: return "UINT_LEAST64_MAX";
        case MacroTokenKind::UINT_LEAST8_MAX: return "UINT_LEAST8_MAX";
        case MacroTokenKind::UINT_MAX: return "UINT_MAX";
        case MacroTokenKind::UINT16_C: return "UINT16_C";
        case MacroTokenKind::UINT16_MAX: return "UINT16_MAX";
        case MacroTokenKind::UINT32_C: return "UINT32_C";
        case MacroTokenKind::UINT32_MAX: return "UINT32_MAX";
        case MacroTokenKind::UINT64_MAX: return "UINT64_MAX";
        case MacroTokenKind::UINT64_C: return "UINT64_C";
        case MacroTokenKind::UINT8_C: return "UINT8_C";
        case MacroTokenKind::UINT8_MAX: return "UINT8_MAX";
        case MacroTokenKind::UINTMAX_C: return "UINTMAX_C";
        case MacroTokenKind::UINTMAX_MAX: return "UINTMAX_MAX";
        case MacroTokenKind::UINTPTR_MAX: return "UINTPTR_MAX";
        case MacroTokenKind::ULLONG_MAX: return "ULLONG_MAX";
        case MacroTokenKind::ULONG_MAX: return "ULONG_MAX";
        case MacroTokenKind::USHRT_MAX: return "USHRT_MAX";
        case MacroTokenKind::VA_ARG: return "va_arg";
        case MacroTokenKind::VA_COPY: return "va_copy";
        case MacroTokenKind::VA_END: return "va_end";
        case MacroTokenKind::VA_START: return "va_start";
        case MacroTokenKind::_WCHAR_MAX: return "WCHAR_MAX";
        case MacroTokenKind::_WCHAR_MIN: return "WCHAR_MIN";
        case MacroTokenKind::_WEOF: return "WEOF";
        case MacroTokenKind::WINT_MAX: return "WINT_MAX";
        case MacroTokenKind::WINT_MIN: return "WINT_MIN";
        default: return "";
    }
};

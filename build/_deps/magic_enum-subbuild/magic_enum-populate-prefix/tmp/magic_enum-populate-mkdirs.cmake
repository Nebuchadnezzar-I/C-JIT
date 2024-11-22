# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-src")
  file(MAKE_DIRECTORY "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-src")
endif()
file(MAKE_DIRECTORY
  "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-build"
  "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix"
  "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/tmp"
  "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp"
  "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src"
  "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/admiralcapo/personal/C-JIT/build/_deps/magic_enum-subbuild/magic_enum-populate-prefix/src/magic_enum-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()

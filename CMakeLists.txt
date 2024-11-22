# CMakeLists.txt
cmake_minimum_required(VERSION 3.20)

# Project name and settings
project(CJIT
    VERSION 1.0
    DESCRIPTION "A modern C++23-based Compiler with Lexer and Token modules"
    LANGUAGES CXX
)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Options
option(BUILD_TESTS "Build unit tests" ON)

# Add the magic_enum library (via FetchContent or system-wide package)
include(FetchContent)
FetchContent_Declare(
    magic_enum
    GIT_REPOSITORY https://github.com/Neargye/magic_enum.git
    GIT_TAG v0.9.3 # Latest version at the time of writing
)
FetchContent_MakeAvailable(magic_enum)

# Add include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Main target (Executable)
add_executable(compiler)

# Source files for the main executable
target_sources(compiler PRIVATE
    main.cpp
    src/Lexer/Lexer.cpp
    src/Lexer/Token.cpp
)

# Include headers
target_include_directories(compiler PRIVATE include)

# Link libraries
target_link_libraries(compiler PRIVATE magic_enum)
target_include_directories(compiler PRIVATE include)

# Enable warnings and best practices (optional)
if(MSVC)
    target_compile_options(compiler PRIVATE /W4 /permissive- /EHsc)
else()
    target_compile_options(compiler PRIVATE -Wall -Wextra -pedantic -Werror)
endif()

# Tests (optional, enabled if BUILD_TESTS is ON)
if(BUILD_TESTS)
    enable_testing()
    add_executable(tests)

    # Add test source files
    target_sources(tests PRIVATE
        test/LexerTest.cpp
        test/TokenTest.cpp
        src/Lexer/Lexer.cpp
        src/Lexer/Token.cpp
    )

    # Include directories and libraries for tests
    target_include_directories(tests PRIVATE include)
    target_link_libraries(tests PRIVATE magic_enum)

    # Add tests for CTest
    add_test(NAME LexerTest COMMAND tests)
endif()

cmake_minimum_required(VERSION 3.20)
project(CJIT)

# Set C++ standard to the latest
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add main application
add_executable(main
    main.cpp
    Test/RunAllTests.cpp
    Test/Token/Normal/TestNormalTokens.cpp
    Test/Token/Spec/TestSpecTokens.cpp
)


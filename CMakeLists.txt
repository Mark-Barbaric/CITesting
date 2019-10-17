cmake_minimum_required(VERSION 3.9)
project(CITesting)

set(CMAKE_CXX_STANDARD 14)

option(DISABLE_TESTS "Disable compilation of unit tests" OFF)

add_subdirectory(src)
if (NOT DISABLE_TESTS)
    add_subdirectory(test)
endif()
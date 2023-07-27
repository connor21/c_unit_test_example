# CMake example for unit testing and TDD

cmake_minimum_required(VERSION 3.0)

# set binary directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

project(fizzbuzz)

# Unit testing
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
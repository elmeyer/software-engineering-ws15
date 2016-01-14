cmake_minimum_required(VERSION 2.8)
project(software-engineering-ws15-tests)
set(CMAKE_CXX_FLAGS "-std=c++0x -Wall")

add_executable(tests tests.cpp)
target_link_libraries(tests converters)

add_test(tests tests tinytest)
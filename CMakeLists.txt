cmake_minimum_required (VERSION 2.6)
project(Compiler)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(./src)
add_subdirectory(./src)
add_executable(Compiler main.cpp)
target_link_libraries(Compiler Lexer)
link_directories(./src)


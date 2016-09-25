cmake_minimum_required (VERSION 2.6)
project(Compiler)

include_directories(./src)
add_subdirectory(./src)
add_executable(Compiler Lexer.cpp main.cpp)
add_compile_options(-std=c++11)


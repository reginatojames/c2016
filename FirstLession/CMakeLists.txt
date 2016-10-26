cmake_minimum_required(VERSION 3.6)
project(FirstLession)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES es1.cpp es2.cpp es3.c es4.c es5.c es6.c es7.c es8.c es9.c)
add_executable(FirstLession ${SOURCE_FILES})
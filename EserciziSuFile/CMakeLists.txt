cmake_minimum_required(VERSION 3.6)
project(EserciziSuFile)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES writing.c)
add_executable(EserciziSuFile ${SOURCE_FILES})
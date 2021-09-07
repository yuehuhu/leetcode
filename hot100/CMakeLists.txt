cmake_minimum_required(VERSION 3.20)
project(hot100)

set(CMAKE_CXX_STANDARD 14)

add_executable(hot100 main.cpp cmake-build-debug/e10.cpp cmake-build-debug/e10.h)

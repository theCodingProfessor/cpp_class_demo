cmake_minimum_required(VERSION 3.21)
project(git_demo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(git_demo
        main.cpp main.cpp Bird.cpp Bird.h)

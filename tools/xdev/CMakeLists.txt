cmake_minimum_required(VERSION 3.20)

project(xdev VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(xdev
    src/main.cpp
)

target_include_directories(xdev PRIVATE include)
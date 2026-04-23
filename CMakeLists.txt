cmake_minimum_required(VERSION 4.1)
project(plane)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(plane
        src/lexer.cpp
        src/main.cpp
)

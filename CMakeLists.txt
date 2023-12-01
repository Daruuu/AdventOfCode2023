cmake_minimum_required(VERSION 3.26)
project(AdventOfCode2023 C)

set(CMAKE_C_STANDARD 99)

add_library(AdventOfCode2023 library.c
        day01.c
        day01.h)

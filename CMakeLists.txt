cmake_minimum_required(VERSION 3.10)

project(box LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(box src/box.c)

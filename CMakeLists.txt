cmake_minimum_required(VERSION 3.31)
project(zad2)

file(GLOB_RECURSE SRC src/*cpp)
set(SOURCES ${SRC})
add_executable(zad2 ${SOURCES})

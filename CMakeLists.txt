cmake_minimum_required(VERSION 3.10)

project(my_first_cmake_project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src)

file(GLOB SOURCES "src/*.cpp")

add_executable(my_first_cmake_program ${SOURCES})

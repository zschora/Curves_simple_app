cmake_minimum_required(VERSION 3.0)

project(myapp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp")

add_executable(myapp main.cpp)
target_link_libraries(myapp PRIVATE curves)


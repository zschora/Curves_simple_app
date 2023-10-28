cmake_minimum_required(VERSION 3.0)

project(myapp)
add_executable(myapp main.cpp)
target_link_libraries(myapp PRIVATE curves)

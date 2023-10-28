cmake_minimum_required(VERSION 3.0)

project(curves)

set(SOURCES
        src/Vector3D.cpp
        src/Circle.cpp)

add_library(curves ${SOURCES})

target_include_directories(curves PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

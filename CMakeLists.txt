cmake_minimum_required(VERSION 3.6)
project(heap)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES heap.cpp)
add_executable(heap ${SOURCE_FILES} cmake-build-debug/heap.h)
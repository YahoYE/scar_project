cmake_minimum_required(VERSION 3.20)
project(z2)

set(CMAKE_CXX_STANDARD 17)

add_executable(z2
        z2.cpp
        tasks/tasks.h
        tasks/task1.cpp
        tasks/task2.cpp
        tasks/task3.cpp
)
target_include_directories(z2 PRIVATE tasks)
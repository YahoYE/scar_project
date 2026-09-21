cmake_minimum_required(VERSION 3.20)
project(z5)

set(CMAKE_CXX_STANDARD 17)

add_executable(z5
        z5.cpp
        tasks/func.cpp
        tasks/tasks.h
        tasks/task1.cpp
        tasks/task2.cpp
        tasks/task3.cpp
        tasks/task4.cpp
)
target_include_directories(z5 PRIVATE tasks)
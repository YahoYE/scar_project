cmake_minimum_required(VERSION 3.20)
project(z5)

set(CMAKE_CXX_STANDARD 17)

add_executable(z5
        z5.cpp
        tasks/tasks.h
        tasks/task1.cpp
        tasks/task2.cpp
        tasks/task3.cpp
        tasks/task4.cpp
        tasks/task5.cpp
        tasks/task6.cpp
        tasks/task7.cpp
        tasks/task8.cpp
)
target_include_directories(z5 PRIVATE tasks)
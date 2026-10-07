cmake_minimum_required(VERSION 3.20)
project(z3)

set(CMAKE_CXX_STANDARD 17)

add_executable(z3
        z3.cpp
        tasks/tasks.h
        tasks/task1.cpp
        tasks/task2.cpp
)

# Чтобы в z4.cpp можно было писать #include "tasks.h" без префиксов
target_include_directories(z3 PRIVATE tasks)
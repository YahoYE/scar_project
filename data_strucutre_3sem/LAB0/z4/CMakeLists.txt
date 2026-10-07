cmake_minimum_required(VERSION 3.20)
project(z4)

set(CMAKE_CXX_STANDARD 17)

add_executable(z4
        z4.cpp
        tasks/tasks.h
        tasks/task1.cpp
        tasks/task2.cpp
        tasks/task3.cpp
        tasks/task4.cpp
        tasks/task5.cpp
        tasks/task6.cpp
        tasks/task7.cpp
)

# Чтобы в z4.cpp можно было писать #include "tasks.h" без префиксов
target_include_directories(z4 PRIVATE tasks)
cmake_minimum_required(VERSION 3.20)
project(Lab2_DoublyLinkedList LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем папку с заголовочными файлами, чтобы в .cpp писать просто #include "List.h"
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/Header files")

add_executable(${PROJECT_NAME}
        "Header files/List.h"
        "Header files/Node.h"
        "Source files/List.cpp"
        "Source files/Node.cpp"
        "Source files/main.cpp"
)
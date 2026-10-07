cmake_minimum_required(VERSION 3.20)
project(Laboratory_Work_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Указываем путь к папке с заголовочными файлами для директив #include
include_directories("Header Files")

# Собираем исполняемый файл проекта
add_executable(Laboratory_Work_1
        "Header Files/DynamicArray.h"
        "Source Files/DynamicArray.cpp"
        "Source Files/Laboratory_Work_1.cpp"
)
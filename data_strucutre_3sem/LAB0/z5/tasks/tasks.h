#pragma once
#include <iostream>
#include <string>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();

template <typename T>
void PrintArray(const T array[], const int &size, const std::string& name)
{
    std::cout << name << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
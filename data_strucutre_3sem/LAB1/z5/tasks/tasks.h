#pragma once
#include <iostream>
#include <string>

void task1();
void task2();
void task3();
void task4();

template <typename T>
void printArr(const T arr[], int size, const std::string& name)
{
    std::cout << name << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
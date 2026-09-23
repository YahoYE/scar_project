#include "tasks.h"
#include <iostream>
using namespace std;

int findIndex(const int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i; // Элемент найден, возвращаем индекс
        }
    }
    return -1; // Элемент не найден
}

void task5()
{
    int* arr = new int[10] {1, 15, -8, -3, 12, 38, 0, 4, 16, 4};

    printArr(arr, 10, "Int array:");

    int searchValue;
    cout << "Enter searching value: "; cin >> searchValue;
    int index = findIndex(arr, 10, searchValue);

    if (index != -1)
    {
        cout << "Index of searching value " << searchValue << " is: " << index << endl;
    }
    else
    {
        cout << "Value " << searchValue << " not found in array" << endl;
    }

    delete[] arr;
}
#include "tasks.h"
#include <iostream>
using namespace std;

int FindIndex(const int array[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}

void task5()
{
    const int size = 10;

    int* array = new int[size]
    {
        1, 15, -8, -3, 12, 38, 0, 4, 16, 4
    };

    PrintArray(array, size, "Int array:");

    int searchValue;
    cout << "Enter searching value: ";
    cin >> searchValue;

    int index = FindIndex(array, size, searchValue);

    if (index != -1)
    {
        cout << "Index of searching value ";
        cout << searchValue << " is: " << index << endl;
    }
    else
    {
        cout << "Value " << searchValue << " not found in array" << endl;
    }

    delete[] array;
}
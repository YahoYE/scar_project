#include "tasks.h"
#include <iostream>
using namespace std;

int FindIndex(const int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

void task5()
{
    int* arr = new int[10] {1, 15, -8, -3, 12, 38, 0, 4, 16, 4};

    PrintArray(arr, 10, "Int array:");

    int searchValue;
    cout << "Enter searching value: ";
    cin >> searchValue;

    int index = FindIndex(arr, 10, searchValue);

    if (index != -1)
    {
        //TODO: string length
        cout << "Index of searching value ";
        cout << searchValue << " is: " << index << endl;
    }
    else
    {
        cout << "Value " << searchValue << " not found in array" << endl;
    }

    delete[] arr;
}
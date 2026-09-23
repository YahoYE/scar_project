#include "tasks.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int* MakeRandomArray(int arraySize)
{
    int* arr = new int[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        arr[i] = rand() % 101;
    }

    return arr;
}

void task7()
{
    srand(time(nullptr));

    const int size1 = 5;
    int* arr1 = MakeRandomArray(size1);
    printArr(arr1, size1, "Random array of 5:");

    const int size2 = 8;
    int* arr2 = MakeRandomArray(size2);
    printArr(arr2, size2, "Random array of 8:");

    const int size3 = 13;
    int* arr3 = MakeRandomArray(size3);
    printArr(arr3, size3, "Random array of 13:");

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
}
#include "tasks.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int* MakeRandomArray(const int &arraySize)
{
    int* array = new int[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        array[i] = rand() % 101;
    }

    return array;
}

void task7()
{
    srand(time(nullptr));

    const int size1 = 5;
    int* array1 = MakeRandomArray(size1);
    PrintArray(array1, size1, "Random array of 5:");

    const int size2 = 8;
    int* array2 = MakeRandomArray(size2);
    PrintArray(array2, size2, "Random array of 8:");

    const int size3 = 13;
    int* array3 = MakeRandomArray(size3);
    PrintArray(array3, size3, "Random array of 13:");

    delete[] array1;
    delete[] array2;
    delete[] array3;
}
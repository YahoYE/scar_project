#include "tasks.h"
#include <iostream>

using namespace std;

void task2()
{
    const int size = 8;

    bool *array = new bool[size]
    {
        true, false, true, true, false, true, false, false
    };

    cout << "Array of bool:\n";
    for (int i = 0; i < size; i++)
    {
        cout << boolalpha << array[i] << " ";
    }
    cout << endl;

    delete[] array;
}
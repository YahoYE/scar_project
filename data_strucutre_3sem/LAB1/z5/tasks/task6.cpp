#include "tasks.h"
#include <iostream>
using namespace std;

int CountLetters(const char array[], const int &size)
{
    int count = 0;
    cout << "Letters in array:" << endl;
    for (int i = 0; i < size; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z')
        {
            cout << array[i] << " ";
            count++;
        }
    }
    cout << endl;
    return count;
}

void task6()
{
    const int size = 15;
    char* arr = new char[size]
    {
        'a', '5', 'm', 'i', '%', '!', 's',
        'p', '*', '9', 'f', '^', ';', 'q', 'k'
    };

    PrintArray(arr, size, "Char array is:");
    int letterCount = CountLetters(arr, size);

    cout << "Count of letters: " << letterCount << endl;

    delete[] arr;
}
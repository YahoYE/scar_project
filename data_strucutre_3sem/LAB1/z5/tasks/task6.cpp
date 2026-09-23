#include "tasks.h"
#include <iostream>
using namespace std;

int countLetters(const char arr[], int size)
{
    int count = 0;
    cout << "Letters in array:" << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            cout << arr[i] << " ";
            count++;
        }
    }
    cout << endl;
    return count;
}

void task6()
{
    char* arr = new char[15] {
        'a', '5', 'm', 'i', '%', '!', 's', 'p', '*', '9', 'f', '^', ';', 'q', 'k'
    };

    printArr(arr, 15, "Char array is:");
    int letterCount = countLetters(arr, 15);

    cout << "Count of letters: " << letterCount << endl;

    delete[] arr;
}
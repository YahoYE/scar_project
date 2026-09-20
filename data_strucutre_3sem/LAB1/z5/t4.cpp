#include "tasks.h"
#include <iostream>

using namespace std;

void sorter(double arr[], int size) {
    for (int i = 0; i < 9; i++)
    {
        bool swaper = false;
        for (int j = 0; j < 9; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int inttemp = arr[j + 1];
                arr[j+1] = arr[j];
                arr[j] = inttemp;
                swaper = true;
            }
        }
        if (!swaper) {break;}
    }
    codePrint(l, 10, "Sorted array is:");
}

void task4() {
    double* arr = new double[10] {1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5, 16.7, 4.5};
    cout << "Array of double:";
    for (int i = 0; i < 10; i++) {}

    
}
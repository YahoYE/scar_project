#include "tasks.h"

using namespace std;

void Sorter(double array[], const int &size)
{
    for (int i = 0; i < size - 1; i++)
    {
        //TODO: naming
        bool isswaping = false;

        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int inttemp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = inttemp;
                isswaping = true;
            }
        }

        if (!isswaping)
        {
            break;
        }
    }
    PrintArray(array, size, "Array:");
}

void task4()
{
    const int size = 10;
    double *array = new double[10]
    {
        1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5, 16.7, 4.5
    };
    PrintArray(array, size, "Array of double:");
    delete array;
}
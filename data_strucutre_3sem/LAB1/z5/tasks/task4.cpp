#include "tasks.h"

using namespace std;

//TODO: naming
void Sorter(double array[], const int &size)
{
    //TODO: size?
    for (int i = 0; i < size - 1; i++)
    {
        bool swaper = false;

        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int inttemp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = inttemp;
                swaper = true;
            }
        }

        if (!swaper)
        {
            break;
        }
    }
    PrintArray(array, size, "Array:");
}

void task4()
{
    //TODO: naming, string length, to const
    const int size = 10;
    double *array = new double[10]
    {1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5, 16.7, 4.5};
    PrintArray(array, size, "Array of double:");
    delete array;
}
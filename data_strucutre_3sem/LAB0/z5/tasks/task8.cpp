#include <iostream>
#include "tasks.h"

using namespace std;

int* ReadArray(int count)
{
    int* values = new int[count];
    for (int i = 0; i < count; i++)
    {
        cin >> values[i];
    }
    return values;
}

int CountPositiveValues(int* values, int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
       if (values[i] > 0)
       {
           result++;
       }
    }
    return result;
}

void task8()
{
    const int count1 = 15;
    int* values = ReadArray(count1);
    cout << "Count is: " << CountPositiveValues(values, count1) << endl;
    delete[] values;  /* утечка данных была тут
    тк не было удаление первого значения */

    const int count2 = 20;
    values = ReadArray(count2);
    cout << "Count is: " << CountPositiveValues(values, count2) << endl;
    delete[] values;
}
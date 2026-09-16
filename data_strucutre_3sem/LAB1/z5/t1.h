#include <iostream>

using namespace std;

void task1()
{
    double* arr = new double[10] {1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5};
    cout << "Array of double:\n";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    delete[] arr;
    }
}
#include "tasks.h"
#include <iostream>

using namespace std;

double getPower(double base, int exponent)
{
    double res = 1.0;
    for (int i = 0;i < exponent; i++)
    {
        res *= base;
    } 
    return res;
}

void getPowerDemo(double base, int exponent)
{
    cout << base << " ^ " << exponent << " = " << getPower(base, exponent) << endl;
}

void task1()
{
    cout << 2.0 << " ^ " << 5 << " = " << getPower(2.0, 5) << endl;
    cout << 3.0 << " ^ " << 4 << " = " << getPower(3.0, 4) << endl;
    cout << -2.0 << " ^ " << 5 << " = " << getPower(-2.0, 5) << endl;
    cout << "Part 2" << endl;
    getPowerDemo(2.0, 5);
    getPowerDemo(3.0, 4);
    getPowerDemo(-2.0, 5);
}
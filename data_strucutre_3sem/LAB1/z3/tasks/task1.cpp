#include "tasks.h"
#include <iostream>

using namespace std;

double GetPower(double base, int exponent)
{
    double res = 1.0;
    for (int i = 0;i < exponent; i++)
    {
        res *= base;
    } 
    return res;
}

void GetPowerDemo(double base, int exponent)
{
    cout << base << " ^ " << exponent << " = ";
    cout << GetPower(base, exponent) << endl;
}

void task1()
{
    cout << 2.0 << " ^ " << 5 << " = " << GetPower(2.0, 5) << endl;
    cout << 3.0 << " ^ " << 4 << " = " << GetPower(3.0, 4) << endl;
    cout << -2.0 << " ^ " << 5 << " = " << GetPower(-2.0, 5) << endl;
    cout << "Part 2" << endl;
    GetPowerDemo(2.0, 5);
    GetPowerDemo(3.0, 4);
    GetPowerDemo(-2.0, 5);
}
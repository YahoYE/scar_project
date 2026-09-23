#include "tasks.h"
#include <iostream>

using namespace std;

//TODO: {}
void RoundToTens(int& value)
{
    if (value % 10 < 5) {
        value = value / 10 * 10;
    }
    if (value % 10 >= 5) {
        value = value / 10 * 10 + 10;
    }
}

void task2()
{
    int number1= 204;
    cout << "For " << number1 << " rounded value is ";
    RoundToTens(number1);
    cout << number1 << endl;
    int number2 = 205;
    cout << "For " << number2 << " rounded value is ";
    RoundToTens(number2);
    cout << number2 << endl;
    int number3 = 206;
    cout << "For " << number3 << " rounded value is ";
    RoundToTens(number3); cout << number3 << endl;
}

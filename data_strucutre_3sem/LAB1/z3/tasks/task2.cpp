#include "tasks.h"
#include <iostream>

using namespace std;

void roundToTens(int& value) {
    if (value % 10 < 5) {
        value = value / 10 * 10;
    }
    if (value % 10 >= 5) {
        value = value / 10 * 10 + 10;
    }
}

void task2() {
    int a = 204; cout << "For " << a << " rounded value is "; roundToTens(a); cout << a << endl;
    int b = 205; cout << "For " << b << " rounded value is "; roundToTens(b); cout << b << endl;
    int c = 206; cout << "For " << c << " rounded value is "; roundToTens(c); cout << c << endl;
}

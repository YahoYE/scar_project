#include <iostream>
#include <windows.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, i = 0; 
    cout << "Введите ограничение для числа Фибанначи: "; cin >> n;
    while (true) {
        int fib = fibonacci(i);
        if (fib <= n) { i++; continue; } 
        cout << "Найденно число Фибаначчи привышающее " << n << ": " << fib << endl;
        break;
    }
    
    return 0;
}
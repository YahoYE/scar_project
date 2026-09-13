#include <iostream>
#include <windows.h>
using namespace std;

int akkerman(int m, int n) {
    if (m == 0) return n + 1;
    if (m > 0 && n == 0) return akkerman(m - 1, 1);
    return akkerman(m - 1, akkerman(m, n - 1)); 
} 

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    cout << "====== Числа Аккермана для m,n <= 3 ======" << endl;
    for (int m = 0; m <= 3; m++) {
        for (int n = 0; n <= 3; n++)
        {
            cout << "Для m=" << m << " n=" << n << " число: " << akkerman(m, n) << endl;
        }
    }

    return 0;
}
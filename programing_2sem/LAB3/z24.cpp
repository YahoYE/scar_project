// Даны действительное число a, натуральное число n. 1/a^n
// LAB 3 24 
#include <iostream>
#include <cmath>

int main() {
    int a, n;
    double sum = 0;

    std::cout << "Введите число: "; std::cin >> a;
    std::cout << "Введите число: "; std::cin >> n;

    for (int i = 0; i <= n; i++) {
        sum += 1/pow(a, pow(2, i));
    }

    std::cout << "Сумма: " << sum << std::endl;
    return 0;
}



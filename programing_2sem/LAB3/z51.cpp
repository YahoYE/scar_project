// LAB3 51
#include <iostream>
#include <cmath>

int main() {
    int n, s;
    double sum = 0, a;

    std::cout << "Введите число: "; std::cin >> n;
    std::cout << "Введите число: "; std::cin >> s;

    for (int i = 1; i <= n; i++) {
        std::cout << "Введите A: "; std::cin >> a;
        if (i != s) {sum += a;}
    }
    std::cout << "Ср. знач: " << sum / (n - 1) << std::endl;
    return 0;
}

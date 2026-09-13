// Определить, принадлежит ли точка с координатами x, y заштрихованной части плоскости.
#include <iostream>
#include <cmath>

int main() {
    int x, y;

    std::cout << "Введите X:"; std::cin >> x;
    std::cout << "Введите Y:"; std::cin >> y;

    std::cout << "--------------------------" << "\n";

    if (x*y >= 0 && pow(x, 2) + pow(y, 2) >= 4 && pow(x, 2) + pow(y, 2) <= 16)
        std::cout << "Точка входит в область";
    else std::cout << "Точка не входит в область";
}
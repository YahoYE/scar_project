// 
#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cout << "Введите число:"; std::cin >> a;
    std::cout << "Введите число:"; std::cin >> b;
    std::cout << "Введите число:"; std::cin >> c;

    std::cout << "--------------------------" << "\n";
    
    if (a >= 0) {std::cout << pow(a, 2) << std::endl;}
    if (b >= 0) {std::cout << pow(b, 2) << std::endl;}
    if (c >= 0) {std::cout << pow(c, 2) << std::endl;}
    
}
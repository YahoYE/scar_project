// Прощадь параллелограмма
#include <iostream>

int main() {
    int a, b;

    std::cout << "Введите длинну основания: "; std::cin >> a;
    std::cout << "Введите длинну высоты: "; std::cin >> b;
    std::cout << "--------------------------" << "\n";
    std::cout << "Площадь параллелограмма: " << a * b / 2;

    return 0;
}

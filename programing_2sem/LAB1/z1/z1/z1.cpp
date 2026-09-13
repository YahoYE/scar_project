// Задача 1 на 1 лабораторную работу:
// Напишите программу, которая позволяет ввести с клавиатуры сколько Вам лет, программа должна вывести на экран сообщение, содержащее фамилию, имя, номер группы, количество лет, а также дополнительную информацию по вашему усмотрению.
// Используйте операторы cin, cout, printf, scanf.
#include <iostream>
#include <string> 


int main() {
    setlocale(LC_ALL, "RU");
    
    // Ввод 
    std::string fio; std::cout << "Введите ФИО:"; getline(std::cin, fio);
    std::string group; std::cout << "Введите номер группы:"; getline(std::cin, group);
    int age; std::cout << "Введите ваш возраст:"; std::cin >> age;
    std::string dish; std::cout << "Введите ваше любимое блюдо:"; std::cin >> dish;

    // Вывод 
    std::cout << "--------------------------" << "\n";
    std::cout << "Ваша ФИО:" << fio << "\n";
    std::cout << "Ваша группа:" << group << "\n";
    std::cout << "Ваш возраст:" << age << "\n";
    std::cout << "Вы любите:" << dish;

    return 0;
}       
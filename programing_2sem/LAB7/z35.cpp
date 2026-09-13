#include <iostream>
#include <string>
using namespace std;

struct phone
{
    string model;
    float price;
};

bool isCheaper(const phone& p1, const phone& p2) 
{
    return p1.price < p2.price;
}

int main()
{
    phone p1, p2;
    cout << "Занесите данные о телефонах\n"; 
    cout << "===Первое устройство===\n";
    cout << "Введите название модели: "; getline(cin, p1.model);
    cout << "Введите стоитмость модели: "; cin >> p1.price; cin.ignore();
    cout << "===Второе устройство===\n";
    cout << "Введите название модели: "; getline(cin, p2.model);
    cout << "Введите стоитмость модели: "; cin >> p2.price;
    
    cout << "\n===== Сравнение =====\n";
    if (isCheaper(p2, p1))
    {
        cout << "" << p2.model << " дешевле, чем " << p1.model;
    }
    else
    {
        cout << "" << p1.model << " дешевле, чем " << p2.model;
    }


    return 0;
}
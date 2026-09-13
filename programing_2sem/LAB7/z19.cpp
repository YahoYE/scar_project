#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Book
{
    string title;
    float price;
    string director;
};

int main()
{
    vector<Book> librari;
    string n;
    
    do
    {
        cout << "Занести данные? (y/n): ";
        cin >> n;
        
        if (n == "y")
        {
            Book newBook;
            
            cout << "Название фильма: ";
            cin.ignore(); 
            getline(cin, newBook.title);
            
            cout << "Стоимость: ";
            cin >> newBook.price;
            
            cout << "Режиссер: ";
            cin.ignore(); 
            getline(cin, newBook.director);
            
            
            librari.push_back(newBook);
            cout << "Фильм добавлен!\n";
        }
        
    } while (n != "n");  // продолжаем пока не введут 'n'
    
    // bubl sort
    bool sorted = false;
    while(sorted == false) {
        sorted = true;
        for(int i = 1; i < size(librari); i++) {
            if (librari[i].price < librari[i-1].price) {
                Book temp = librari[i];
                librari[i] = librari[i-1];
                librari[i-1] = temp;
                sorted = false;
            }
        }
    }

    cout << "\n===== Картотека видотеки =====\n\n";
    for(int i = 0; i < size(librari); i++) {
        cout << "Фильм: " << librari[i].title << endl;
        cout << "Цена: " << librari[i].price << endl;
        cout << "Режисер: " << librari[i].director << "\n\n";
    }
    
    return 0;
}
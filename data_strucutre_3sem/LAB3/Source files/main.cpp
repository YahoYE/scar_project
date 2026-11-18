#include <iostream>
#include <limits>
#include "List.h"

//! \brief Безопасное считывание целого числа с клавиатуры.
int ReadInt(const char* prompt)
{
    int value;
    while (true)
    {
        std::cout << prompt;
        if (std::cin >> value)
        {
            return value;
        }
        std::cout << "Invalid input. Please enter an integer.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

//! \brief Вывод текущего состояния списка в консоль.
void PrintList(const List& list)
{
    std::cout << "Current list: ";
    Node* current = list.GetHead();
    if (current == nullptr)
    {
        std::cout << "empty";
    }
    while (current != nullptr)
    {
        std::cout << current->GetData();
        if (current->GetNextNode() != nullptr)
        {
            std::cout << ", ";
        }
        current = current->GetNextNode();
    }
    std::cout << "\n\n";
}

void HandleRemoveByIndex(List& list)
{
    int index = ReadInt("Enter index to remove: ");
    if (list.RemoveNodeByIndex(index))
    {
        std::cout << "Element removed.\n";
    }
    else
    {
        std::cout << "Error: index out of range.\n";
    }
}

void HandleRemoveByValue(List& list)
{
    int value = ReadInt("Enter value to remove: ");
    if (list.RemoveNodeByValue(value))
    {
        std::cout << "Element removed.\n";
    }
    else
    {
        std::cout << "Error: value not found.\n";
    }
}

void HandleInsertAtBeginning(List& list)
{
    int value = ReadInt("Enter value to insert at the beginning: ");
    list.InsertAtBeginning(value);
    std::cout << "Element inserted.\n";
}

void HandleInsertAtEnd(List& list)
{
    int value = ReadInt("Enter value to insert at the end: ");
    list.InsertAtEnd(value);
    std::cout << "Element inserted.\n";
}

void HandleInsertAfter(List& list)
{
    int target = ReadInt("Enter target element value (insert after): ");
    int value = ReadInt("Enter new value to insert: ");
    if (list.InsertAfter(target, value))
    {
        std::cout << "Element inserted.\n";
    }
    else
    {
        std::cout << "Error: target element not found.\n";
    }
}

void HandleInsertBefore(List& list)
{
    int target = ReadInt("Enter target element value (insert before): ");
    int value = ReadInt("Enter new value to insert: ");
    if (list.InsertBefore(target, value))
    {
        std::cout << "Element inserted.\n";
    }
    else
    {
        std::cout << "Error: target element not found.\n";
    }
}

void HandleSort(List& list)
{
    list.Sort();
    std::cout << "List sorted.\n";
}

void HandleLinearSearch(const List& list)
{
    int value = ReadInt("Enter value to search: ");
    int index = list.FindIndexByValue(value);
    if (index != -1)
    {
        std::cout << "Element found at index: " << index << "\n";
    }
    else
    {
        std::cout << "Element not found.\n";
    }
}

int main()
{
    List list;
    // Начальные тестовые данные как в примере методички
    list.InsertAtEnd(55);
    list.InsertAtEnd(7);
    list.InsertAtEnd(1);
    list.InsertAtEnd(3);

    bool isRunning = true;
    while (isRunning)
    {
        std::cout << "===========================================\n";
        std::cout << "Laboratory Work #2 Doubly Linked List\n";
        PrintList(list);

        std::cout << "Select the action you want to do:\n"
                  << "1. Remove an element by index from a list\n"
                  << "2. Remove an element by value from a list\n"
                  << "3. Insert an element at the beginning\n"
                  << "4. Insert an element at the end\n"
                  << "5. Insert after a certain element\n"
                  << "6. Insert before a certain element\n"
                  << "7. Sort list\n"
                  << "8. Linear search for an element in a list\n"
                  << "0. Exit\n";

        int choice = ReadInt("Your input: ");
        std::cout << "\n";

        switch (choice)
        {
            case 1:
                HandleRemoveByIndex(list);
                break;
            case 2:
                HandleRemoveByValue(list);
                break;
            case 3:
                HandleInsertAtBeginning(list);
                break;
            case 4:
                HandleInsertAtEnd(list);
                break;
            case 5:
                HandleInsertAfter(list);
                break;
            case 6:
                HandleInsertBefore(list);
                break;
            case 7:
                HandleSort(list);
                break;
            case 8:
                HandleLinearSearch(list);
                break;
            case 0:
                isRunning = false;
                break;
            default:
                std::cout << "Unknown command. Try again.\n";
                break;
        }
        std::cout << "\n";
    }

    return 0;
}
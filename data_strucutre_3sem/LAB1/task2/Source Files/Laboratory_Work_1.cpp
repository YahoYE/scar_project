#include <iostream>
#include <limits>
#include "DynamicArray.h"

using namespace std;

int ReadInt()
{
    int value;
    while (true)
    {
        if (cin >> value)
        {
            return value;
        }
        cout << "Unknown command. Try entering the command again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void PrintArray(const DynamicArray& arr)
{
    cout << "\nCurrent array:\n";
    if (arr.GetSize() == 0)
    {
        cout << "[Empty array]";
    }
    else
    {
        for (int i = 0; i < arr.GetSize(); ++i)
        {
            cout << arr.GetElement(i);
            if (i < arr.GetSize() - 1) cout << ", ";
        }
    }
    cout << "\n(Size: " << arr.GetSize() << ", Capacity: " << arr.GetCapacity() << ")\n";
}

int main()
{
    DynamicArray arr;

    // Начальные тестовые данные из методички
    arr.InsertAtEnd(12);
    arr.InsertAtEnd(3);
    arr.InsertAtEnd(8);
    arr.InsertAtEnd(25);

    while (true)
    {
        cout << "\n--------------------------------------------\n"
                  << "Laboratory Work #1 Dynamic Array\n";
        PrintArray(arr);
        cout << "\nSelect the action you want to do:\n"
                  << "1. Remove an element by index from an array\n"
                  << "2. Remove an element by value from an array\n"
                  << "3. Insert an element at the beginning\n"
                  << "4. Insert an element at the end\n"
                  << "5. Insert after a certain element\n"
                  << "6. Sort array (Quick Sort)\n"
                  << "7. Linear search for an element in an array\n"
                  << "8. Binary search for an element in an array\n"
                  << "0. Exit\n"
                  << "Your input: ";

        int choice = ReadInt();

        if (choice == 0) break;

        switch (choice)
        {
            case 1:
            {
                cout << "Enter index: ";
                int idx = ReadInt();
                if (!arr.RemoveByIndex(idx))
                    cout << "Error: Invalid index!\n";
                break;
            }
            case 2:
            {
                cout << "Enter value: ";
                int val = ReadInt();
                if (!arr.RemoveByValue(val))
                    cout << "Error: Value not found!\n";
                break;
            }
            case 3:
            {
                cout << "Enter value: ";
                arr.InsertAtBeginning(ReadInt());
                break;
            }
            case 4:
            {
                cout << "Enter value: ";
                arr.InsertAtEnd(ReadInt());
                break;
            }
            case 5:
            {
                cout << "Target element: ";
                int target = ReadInt();
                cout << "New element: ";
                int val = ReadInt();
                if (!arr.InsertAfterValue(target, val))
                    cout << "Error: Target not found!\n";
                break;
            }
            case 6:
                arr.SortArray();
                cout << "Sorted.\n";
                break;
            case 7:
            {
                cout << "Enter value to search: ";
                int val = ReadInt();
                int idx = arr.LinearSearch(val);
                cout << (idx != -1 ? "Found at index: " + to_string(idx) : "Not found") << "\n";
                break;
            }
            case 8:
            {
                cout << "Enter value to search: ";
                int val = ReadInt();
                int idx = arr.BinarySearch(val);
                cout << (idx != -1 ? "Found at index: " + to_string(idx) : "Not found (ensure array is sorted)") << "\n";
                break;
            }
            default:
                cout << "Unknown command. Try entering the command again\n";
                break;
        }
    }
    return 0;
}
#include "DynamicArray.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

void PrintArray(const DynamicArray& array, const string& message)
{
    cout << message << endl;
    int size = array.GetSize();
    if (size == 0)
    {
        cout << "(empty)" << endl;
        return;
    }

    for (int i = 0; i < size; i++)
    {
        cout << array.GetElement(i);
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

int ReadInteger(const string& prompt)
{
    int value = 0;
    while (true)
    {
        cout << prompt;
        if (cin >> value)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
        cout << "Unknown command. Try entering the command again" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void ShowMenu()
{
    cout << "\nSelect the action you want to do:" << endl;
    cout << "1. Remove an element by index from an array" << endl;
    cout << "2. Remove an element by value from an array" << endl;
    cout << "3. Insert an element at the beginning" << endl;
    cout << "4. Insert an element at the end" << endl;
    cout << "5. Insert after a certain element" << endl;
    cout << "6. Sort array" << endl;
    cout << "7. Linear search for an element in an array" << endl;
    cout << "8. Binary search for an element in an array" << endl;
    cout << "0. Exit" << endl;
}

int main()
{
    //TODO: to pointer
    DynamicArray array;

    // Начальные элементы согласно демонстрации в методичке
    array.InsertAtEnd(12);
    array.InsertAtEnd(3);
    array.InsertAtEnd(8);
    array.InsertAtEnd(25);

    cout << "Laboratory Work #1 Dynamic Array" << endl;

    bool isRunning = true;
    while (isRunning)
    {
        cout << "\nCurrent array:" << endl;
        PrintArray(array, "");
        ShowMenu();

        int choice = ReadInteger("Your input: ");

        switch (choice)
        {
            case 1:
            {
                if (array.GetSize() == 0)
                {
                    cout << "Array is empty." << endl;
                    break;
                }
                int index = ReadInteger("Enter index to remove: ");
                if (!array.RemoveByIndex(index))
                {
                    cout << "Index out of range." << endl;
                }
                else
                {
                    cout << "Element removed." << endl;
                }
                break;
            }
            case 2:
            {
                if (array.GetSize() == 0)
                {
                    cout << "Array is empty." << endl;
                    break;
                }
                int value = ReadInteger("Enter value to remove: ");
                if (!array.RemoveByValue(value))
                {
                    cout << "Value not found." << endl;
                }
                else
                {
                    cout << "Element removed." << endl;
                }
                break;
            }
            case 3:
            {
                int value = ReadInteger("Enter value to insert at beginning: ");
                array.InsertAtBeginning(value);
                break;
            }
            case 4:
            {
                int value = ReadInteger("Enter value to insert at end: ");
                array.InsertAtEnd(value);
                break;
            }
            case 5:
            {
                int target = ReadInteger("Enter target value to insert after: ");
                int value = ReadInteger("Enter value to insert: ");
                if (!array.InsertAfterValue(target, value))
                {
                    cout << "Target element not found." << endl;
                }
                break;
            }
            case 6:
            {
                array.SortArray();
                cout << "Array sorted using Quick Sort." << endl;
                break;
            }
            case 7:
            {
                int value = ReadInteger("Enter value to search (Linear): ");
                int index = array.LinearSearch(value);
                //TODO: duplication
                if (index != -1)
                {
                    cout << "Element found at index: " << index << endl;
                }
                else
                {
                    cout << "Element not found." << endl;
                }
                break;
            }
            case 8:
            {
                cout << "Note: Binary search"
                        " requires sorted array." << endl;
                int value = ReadInteger("Enter value"
                                        " to search (Binary): ");
                int index = array.BinarySearch(value);
                //TODO: duplication

                if (index != -1)
                {
                    cout << "Element found at index: " << index << endl;
                }
                else
                {
                    cout << "Element not found." << endl;
                }
                break;
            }
            case 0:
            {
                isRunning = false;
                break;
            }
            default:
            {
                cout << "Unknown command. Try "
                        "entering the command again" << endl;
                break;
            }
        }
    }

    return 0;
}
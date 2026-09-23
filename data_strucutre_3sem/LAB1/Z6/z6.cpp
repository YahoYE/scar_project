//
// Created by shkar on 23.09.2026.
//
//! \brief Задание 1. Поиск человека по фамилии.
#include <iostream>

using namespace std;

//! \brief Задание 1. Поиск человека по фамилии.
void Task1_FindPersonByLastName()
{
    std::cout << "Task 1 – Find Person by Last Name" << std::endl;

    Person** people = CreatePeopleArray();
    for (int i = 0; i < PeopleCount; i++)
    {
        WritePerson(people[i]);
    }

    std::string lastName;
    std::cout << "Enter last name: ";
    std::cin >> lastName;
    int foundIndex = -1;

    // Линейный поиск
    for (int i = 0; i < PeopleCount; i++)
    {
        if (people[i]->LastName == lastName)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
    {
        std::cout << "Could not find a person by last name: " << lastName << std::endl;
    }
    else
    {
        std::cout << "A person's last name "
                  << lastName
                  << " was found. Its index in the array is "
                  << foundIndex
                  << std::endl;
    }

    ClearPeople(people, PeopleCount);
}
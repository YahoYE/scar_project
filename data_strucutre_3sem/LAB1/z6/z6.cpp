#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string firstName;
    string lastName;
    unsigned age;
};

struct Product
{
    string name;
    unsigned cost;
    unsigned weight;
};

void writePerson(const Person& person)
{
    cout << "First Name: " + person.firstName
        + "; Last Name: " + person.lastName
        + "; Age: " + to_string(person.age) << endl;
}

void writeProduct(const Product& product)
{
    cout << "Name: " + product.name
        + "; Cost: " + to_string(product.cost)
        + "; Weight: " + to_string(product.weight) << endl;
}

const int peopleCount = 5;

Person** createPeopleArray()
{
    Person** people = new Person * [peopleCount];
    people[0] = new Person();
    people[0]->firstName = "Casey";
    people[0]->lastName = "Aguilar";
    people[0]->age = 30;

    people[1] = new Person();
    people[1]->firstName = "Brock";
    people[1]->lastName = "Curtis";
    people[1]->age = 19;

    people[2] = new Person();
    people[2]->firstName = "Blake";
    people[2]->lastName = "Diaz";
    people[2]->age = 21;

    people[3] = new Person();
    people[3]->firstName = "Cristian";
    people[3]->lastName = "Evans";
    people[3]->age = 55;

    people[4] = new Person();
    people[4]->firstName = "Les";
    people[4]->lastName = "Foss";
    people[4]->age = 4;

    return people;
}

//! \brief Очищает из памяти объект человека \see Person.
//! \param person – объект человека \see Person.
void clearPerson(Person* person)
{
    delete person;
}

void clearPeople(Person** people, int itemsCount)
{
    for (int i = 0; i < itemsCount; i++)
    {
        clearPerson(people[i]);
    }

    delete[] people;
}

void test6_1()
{
    Person** people = createPeopleArray();
    for (int i = 0; i < peopleCount; i++)
    {
        writePerson(*people[i]);
    }

    clearPeople(people, peopleCount);
}

void test6_2()
{
    Person** people = createPeopleArray();
    for (int i = 0; i < peopleCount; i++)
    {
        writePerson(*people[i]);
    }

    string lastName;
    cout << "Enter last name: ";
    cin >> lastName;
    int foundIndex = -1;

    for (int i = 0; i < peopleCount; i++)
    {
        if (people[i]->lastName == lastName)
        {
            foundIndex = i;
            break; 
        }
    }

    if (foundIndex == -1)
    {
        cout << "Could not find a person by last name: " << lastName << endl;
    }
    else
    {
        cout << "A person's last name "
            << lastName
            << " was found. Its index in the array is "
            << foundIndex
            << endl;
    }

    clearPeople(people, peopleCount);
}
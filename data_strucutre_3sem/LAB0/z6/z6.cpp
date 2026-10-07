#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string FirstName;
    string LastName;
    unsigned Age;
};

struct Product
{
    string Name;
    unsigned Cost;
    unsigned Weight;
};

void WritePerson(const Person& person)
{
    cout << "First Name: " + person.FirstName
        + "; Last Name: " + person.LastName
        + "; Age: " + to_string(person.Age)
        << endl;
}

void WriteProduct(const Product& product)
{
    cout << "Name: " + product.Name
        + "; Cost: " + to_string(product.Cost)
        + "; Weight: " + to_string(product.Weight)
        << endl;
}

const int peopleCount = 5;

Person** createPeopleArray()
{
    Person** people = new Person * [peopleCount];
    people[0] = new Person();
    people[0]->FirstName = "Casey";
    people[0]->LastName = "Aguilar";
    people[0]->Age = 30;

    people[1] = new Person();
    people[1]->FirstName = "Brock";
    people[1]->LastName = "Curtis";
    people[1]->Age = 19;

    people[2] = new Person();
    people[2]->FirstName = "Blake";
    people[2]->LastName = "Diaz";
    people[2]->Age = 21;

    people[3] = new Person();
    people[3]->FirstName = "Cristian";
    people[3]->LastName = "Evans";
    people[3]->Age = 55;

    people[4] = new Person();
    people[4]->FirstName = "Les";
    people[4]->LastName = "Foss";
    people[4]->Age = 4;

    return people;
}

void ClearPerson(Person* person)
{
    delete person;
}

void ClearPeople(Person** people, int itemsCount)
{
    for (int i = 0; i < itemsCount; i++)
    {
        ClearPerson(people[i]);
    }

    delete[] people;
}

int main()
{
    Person** people = createPeopleArray();
    for(int i = 0; i < peopleCount; i++)
    {
        WritePerson(*people[i]);
    }
    ClearPeople(people, peopleCount);
}

void test6_1()
{
    Person** people = createPeopleArray();
    for (int i = 0; i < peopleCount; i++)
    {
        WritePerson(*people[i]);
    }

    ClearPeople(people, peopleCount);
}

void test6_2()
{
    Person** people = createPeopleArray();
    for (int i = 0; i < peopleCount; i++)
    {
        WritePerson(*people[i]);
    }

    string lastName;
    cout << "Enter last name: ";
    cin >> lastName;
    int foundIndex = -1;

    for (int i = 0; i < peopleCount; i++)
    {
        if (people[i]->LastName == lastName)
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

    ClearPeople(people, peopleCount);
}

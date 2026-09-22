#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Base Class
class Person
{
protected:
    string name;

public:
    Person(string personName)
        : name(move(personName))
    {
    }

    void showPerson() const
    {
        cout << "Name: " << name << endl;
    }
};

// Derived Class from Person
class Employee : public Person
{
protected:
    int employeeId;

public:
    Employee(string personName, int id)
        : Person(move(personName)), employeeId(id)
    {
    }

    void showEmployee() const
    {
        showPerson();
        cout << "Employee ID: " << employeeId << endl;
    }
};

// Derived Class from Employee
class Manager : public Employee
{
private:
    string department;

public:
    Manager(string personName, int id, string dept)
        : Employee(move(personName), id),
          department(move(dept))
    {
    }

    void display() const
    {
        showEmployee();
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager manager("Rahul", 101, "IT");

    manager.display();

    return 0;
}
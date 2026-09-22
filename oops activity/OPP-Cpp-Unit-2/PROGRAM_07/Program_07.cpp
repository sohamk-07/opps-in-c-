#include <iostream>

class Academic
{
public:
    void display() const
    {
        std::cout << "Academic information\n";
    }
};

class Sports
{
public:
    void display() const
    {
        std::cout << "Sports information\n";
    }
};

class Student : public Academic, public Sports
{
public:
    void show() const
    {
        Academic::display();
        Sports::display();
    }
};

int main()
{
    Student student;

    student.show();

    return 0;
}
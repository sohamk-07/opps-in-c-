#include <iostream>

class Academic
{
protected:
    int academicMarks;

public:
    explicit Academic(int marks)
        : academicMarks(marks)
    {
    }

    void showAcademic() const
    {
        std::cout << "Academic Marks: "
                  << academicMarks << '\n';
    }
};

class Sports
{
protected:
    int sportsMarks;

public:
    explicit Sports(int marks)
        : sportsMarks(marks)
    {
    }

    void showSports() const
    {
        std::cout << "Sports Marks: "
                  << sportsMarks << '\n';
    }
};

class Student : public Academic, public Sports
{
public:
    Student(int academic, int sports)
        : Academic(academic), Sports(sports)
    {
    }

    void display() const
    {
        showAcademic();
        showSports();

        std::cout << "Total Marks: "
                  << academicMarks + sportsMarks << '\n';
    }
};

int main()
{
    Student student(85, 90);

    student.display();

    return 0;
}
#include <iostream>
using namespace std;
class Student {
public:
 string name;
int age;
 void show() {
 cout << name << " " << age << endl;
 }
};
int main() {
 Student s1,s2;
 s1.name = "Amit";
 s1.age = 19;
 s1.show();
 s2.name = "Rahul";
 s2.age = 20;
 s2.show();
 return 0;
}
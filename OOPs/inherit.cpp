#include <iostream>
using namespace std;

class Person
{

public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }

    Person()
    {
        cout << "im parents" << endl;
    }
};

class child : public Person
{

public:
    int rollno;

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    child p1;
    p1.name = "Rohit";
    p1.age = 23;
    p1.rollno = 986;
    p1.getinfo();f
    return 0;
}
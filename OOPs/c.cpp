#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    // Default Constructor
    Person()
    {

        cout << "constuctor" << endl;
    }

    // Parameterized Constructor
    void child(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << "Child";
    }

    // Display Function
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Person p1; // Default Constructor

    p1.display();

    // p1.child("chut", 555);

    return 0;
}

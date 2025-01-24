#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new float;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }

    {

        void getInfo()
                
            cout << "Name" << name << endl;
             cout << "CGPA" << *cgpaPtr << endl;
    }

}

int main()
{
    int n;

    return 0;
}
#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // non paratensised constructor
    Teacher()
    {
        dept = "ComputerScience";
    }

    void changeDept(string newDept)
    {
        dept=newDept;
    }

    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->subject = subject;
        this->dept = dept;
        this->salary = salary;
    }

    void GetInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Subject:" << subject << endl;
        cout << "Department:" << dept << endl;
    }
    string name;
    string dept;
    string subject;
};

int main()
{
    Teacher t1("Rohit ", "ComputerScience", "C++", 400000);
    t1.GetInfo();
    t1.changeDept("physic");
    t1.GetInfo();
    return 0;
}

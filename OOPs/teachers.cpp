#include<iostream>
using namespace std;

class teachers
{
private:
    
public:
    string name;
    string dept;
    string subject;
    float salary;

        void changeDept(string newDept)
        {
            newDept= dept;
        }

     
            void GetInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Subject:" << subject << endl;
        cout << "Department:" << dept << endl;
    }
        

};

int main()
{
    teachers t;
    t.name ="Rohit";
    t.dept ="Scince";
    t.salary= 200000;
    t.GetInfo();
    t.changeDept("datascirnce");
    t.GetInfo;
    return 0;
}
#include<iostream>
using namespace std;

class Teacher
{
public:
    
    string naame;
    int age;
    
    
};

class student : public Teacher {

    public int rollno;
};

class GrandStudent : public student {

    
;
}

int main()
{
    GrandStudent s1;
    s1.name("Rohit","")
    
    return 0;
}
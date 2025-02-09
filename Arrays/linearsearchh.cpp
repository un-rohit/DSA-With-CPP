#include <iostream>
using namespace std;

int linearsearch(int marks[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (marks[i] == target)
        {

            return i;
        }
    }

    return -1;
}

int main()
{
    int marks[7] = {5, 7, 4, 8, 3, 5, 36};
    int sz = 7;
    int target;
        cout<<"Enter the Target: ";cin>>target;
    

    cout << "The target " << target << " found at " << linearsearch(marks, sz, target) << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>vec;

    cout << "Size of vector = " << vec.size()<<endl;
    vec.push_back(34);
    cout << "After push Size of vector = " << vec.size();
       for (int val : vec) //  for each loop
    {
        cout << val << endl;
    }
    return 0;
}
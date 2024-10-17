#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>vec;

    cout << "Size of vector = " << vec.size()<<endl;
    vec.push_back(34);
    vec.push_back(55);
    vec.push_back(94);

    cout << "After push Size of vector = " << vec.size()<<endl;
    vec.pop_back();
    // vec.front();
    // vec.back();
       for (int val : vec) //  for each loop
    {
        cout << val << endl;
    }

    cout<<endl<<"value in front "<<vec.front()<<endl;
    cout<<"value in back "<<vec.back()<<endl;
    cout<<"value at one "<<vec.at(0)<<endl;
    return 0;
}
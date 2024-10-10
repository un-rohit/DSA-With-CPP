#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd'};
    cout << "Size of vector =" << vec.size();

       for (char val : vec) //  for each loop
    {
        cout << val << endl;
    }
    return 0;
}
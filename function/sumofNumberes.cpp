#include <iostream>
using namespace std;

int sumN(int n)
{

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << sumN(5) << endl;
    cout << sumN(99) << endl;

    return 0;
}
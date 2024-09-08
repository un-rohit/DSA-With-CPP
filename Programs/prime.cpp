#include <iostream>
using namespace std;
int main()
{
    int n, i, p = 0;
    cout << "enter the no" << endl;
    cin >> n;

    for (int i = 1; i < n; i++)
{
        if (n % i == 0)
        {
            cout << p++;
        }
}
    if (p == 2)
    {
        cout << "Prime no";
    }

    else
    {
        cout << "Not a prime no";
    }

    return 0;
}
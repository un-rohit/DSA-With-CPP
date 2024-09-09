#include <iostream>
using namespace std;
int main()
{
    int n = 0, sum = 0;
    cout << "Enter the terms: " << endl;
    cin >> n;
    cout << "Enter the Numbers to add" << endl;
    int arr[1000];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
        sum = arr[i] + sum;
    }
    cout << "Sum of all nos: " << sum;

    return 0;
}
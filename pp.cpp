#include <iostream>
using namespace std;

int main()
{
int n, i, c = 0;
    cout<<"enter a no"<<endl;
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout << "prime no";
    }
    else
    {
         cout << "not prime no"; 
    }
    return 0;    
}
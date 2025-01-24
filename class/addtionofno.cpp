#include<iostream>
using namespace std;
int main()
{
    int n=0;
int sum=0;

    cout<<"input any no: ";
    cin>>n;
    while (n != 0) {
        sum += n % 10;  
        n = n/10;        
        
    }

        
    
    cout << "The sum of no: " << sum<< endl;

    return 0;
}
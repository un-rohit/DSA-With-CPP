#include<iostream>
using namespace std;


int sumOfdigits(int num) {
    int digSum =0;
    while (num >0)
    {
        int lastDig =num %10;
        num /=10;

        digSum += lastDig;
    }
    return digSum;
    
}


int main()
{
    cout<<" Sum of digits ="<<sumOfdigits(465)<<endl;
    
    return 0;
}
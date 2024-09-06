#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter "<<endl;
    cin >> ch;
    if (ch>='a' && ch <= 'z')
    {
        cout << " This is Lowercase";
    }

    else if (ch >= 'A' && ch <= 'Z')

    {
        cout << "this is Upper casee";
    }

    else if (ch>='0' && ch<='9')
    {
        cout<<"This is no";
    }
    

return 0;
}
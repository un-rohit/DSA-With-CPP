#include <iostream>
using namespace std;

    int minOftwo(int a, int b)
    {
        if (a < b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }

    int main()
    {
        cout << "Min = " << minOftwo(5, 7) << endl;
    
    return 0;
    
    }


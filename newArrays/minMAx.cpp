#include <iostream>

using namespace std;
int main()
{
    int num[] = {4, 5, 45, 6, 7};
    int size = 5;

    int smallest = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    cout << "smallest = " << smallest << endl;

    return 0;
}
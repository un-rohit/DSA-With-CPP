#include <iostream>
using namespace std;

int lsearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()

{

    int arr[] = {54, 64, 35, 74, 72, 78, 64, 71};
    int size = sizeof(arr) / sizeof(arr[1]);
    int target;
    cout<<"Enter the Number: ";cin>>target;
    int result = lsearch(arr, target, size);
    if (result != -1)
    {
        cout << "Elemet count at Index " << result+1;
    }
    else
    {
        cout << "not found the element ";
    }

    return 0;
}
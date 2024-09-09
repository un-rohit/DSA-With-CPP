#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {8, 6, 7, 4, 3};
    cout << "Enter the key to Search: ";
    int key;
    cin>>key;
    bool found = LinearSearch(arr, 4, key);

bv b 
    if (found)
    {
        cout << "key is present";
    }
    else
    {
        cout << "key is not found";
    }

    return 0;
}
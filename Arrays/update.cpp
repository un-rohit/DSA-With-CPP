#include <iostream>
using namespace std;

void update(int arr[], int size)
{
    arr[0]=120;
    cout << "Inside the function" << endl;

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

    cout << "Going to main function " << endl;
}

int main()
{
    int arr[] = {1, 2, 3}; 

    update(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
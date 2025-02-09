#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
    void display(int arr[], int size)
    {

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


int main()
{
    int arr[10] = {65, 73, 74, 83, 57, 25, 53, 75, 23, 29};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, size);
    cout << "Displaying in reverse order: ";
     display(arr, size);

    return 0;
}
#include <iostream>
using namespace std;

void Bubblesort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Display(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {57, 45, 46, 86, 35, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array :" << endl;

    Display(arr, size);

    Bubblesort(arr, size);

    cout << "\n after sorting: ";

    Display(arr, size);

    return 0;
}
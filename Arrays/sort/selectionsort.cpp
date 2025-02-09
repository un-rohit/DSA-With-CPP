#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int si = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[si])
            {
                si = j;
            }
        }
        swap(arr[i], arr[si]);
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n=6;
    int arr[6] = {3, 56, 75, 45, 33, 54};

    selectionsort(arr, n);
    printarray(arr,n);
    return 0;
}
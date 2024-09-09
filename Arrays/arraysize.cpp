#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << "printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl<<"printing done" << endl;
}


int main()
{
    int arr[5]={1};
    int n=10;
    printarray(arr,10);
    int arrSize = sizeof(arr)/sizeof(int);
    cout<<"Size of arr: "<<arrSize;
    return 0;
}
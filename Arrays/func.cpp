#include <iostream>
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

    int number= 6;
    int array[5]={1,2,3,4,5};
    printarray(array,5);
}
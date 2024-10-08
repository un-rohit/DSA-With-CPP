#include <iostream>

using namespace std;
int main()
{
    int num[] = {4, 5, 45, 1, 7};
    int size = 5;

    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for (int i = 0; i < size; i++)
    {

        smallest=min(num[i],smallest);
        largest=max(num[i],smallest);
        // if (num[i] < smallest)
        // {
        //     smallest = num[i];
        // }
    } 

    cout << "Smallest = " << smallest<<endl;
    cout<<" Largest = "<<largest;

    return 0;
}
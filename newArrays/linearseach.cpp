#include <iostream>
using namespace std;
// time complexity is O(n) 
int linearSearch(int arr[], int size,int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return - 1;
}

int main()
{
    int arr[] = {3, 5, 45, 6, 43, -1, 86};
    int size = 6;
    int target = -1;
    
    if (linearSearch(arr, size, target)>0 || linearSearch(arr, size, target) < -1 )
    {
    cout <<"At the postion of "<< linearSearch(arr, size, target) +1<<endl;
        
    }
    else
    {
        cout<<"number doesnot exist"<<endl;
    }
    
        
    return 0;
}
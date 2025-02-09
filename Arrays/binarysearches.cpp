#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr, int tar1)
{

    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (tar1 > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar1 < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {11, 23, 45, 65, 76, 78, 79, 87};
    int tar1 = 76;
    // binarysearch(arr, tar1);
    cout << binarysearch(arr1, tar1) << endl;
    vector<int> arr2 = {1, 5, 7, 23, 45, 75, 78, 98, 665};

    return 0;
}
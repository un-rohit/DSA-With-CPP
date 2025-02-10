#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr, int tar1)
{
    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;  // Calculate the middle index
        if (tar1 > arr[mid])
        {
            st = mid + 1;  // Target is in the right half
        }
        else if (tar1 < arr[mid])
        {
            end = mid - 1;  // Target is in the left half
        }
        else
        {
            return mid;  // Target found at index mid
        }
    }
    return -1;  // Target not found
}

int main()
{
    vector<int> arr1 = {11, 23, 45, 65, 76, 78, 79, 87};
    int tar1 = 76;
    // binarysearch(arr, tar1);
    cout << binarysearch(arr1, tar1) << endl;  // Expected output: 4 (index of 76 in arr1)

    vector<int> arr2 = {1, 5, 7, 23, 45, 75, 78, 98, 665};
    cout << binarysearch(arr2, 75) << endl;
    // You can add another call to binarysearch here to test with arr2 and a different target
    // Example:   // Expected output: 5 (index of 75 in arr2)

    return 0;
}
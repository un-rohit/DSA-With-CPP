
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
        cout << arr[i] << endl;
    }
}
int main()
{
    int n;
    int arr[6] = {3, 56, 75, 45, 33, 54};

    selectionsort(arr, n);
    return 0;
}
#include <iostream>
using namespace std;

void quick_sort(int arr[], int low, int high);
int pivot(int arr[], int low, int high);

int main()
{

    /*
2
5
9 1 9 9 2
4
10 22 52 12
    */

    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;

        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        quick_sort(arr, 0, size - 1);

        cout << "\n[";
        for (int n : arr)
        {
            cout << n << " ";
        }
        cout << "]";
    }
};

void quick_sort(int arr[], int low, int high)
{

    if (low >= high)
    {
        return;
    }

    int mid = pivot(arr, low, high);

    quick_sort(arr, low, mid - 1);
    quick_sort(arr, mid + 1, high);
}

int pivot(int arr[], int low, int high)
{
    int i = low + 1;
    int j = high;
    int partition = arr[low];

    while (i <= j)
    {
        if (arr[i] >= partition)
        {
            if (arr[j] < partition)
            {
                swap(arr[i], arr[j]);
                i++;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }

    swap(arr[j], arr[low]);

    return j;
}
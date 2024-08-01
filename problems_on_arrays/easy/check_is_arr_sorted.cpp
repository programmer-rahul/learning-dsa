#include <iostream>
using namespace std;

string check_is_arr_sorted(int arr[], int n);

int main()
{

    int n = 5;
    int arr[n] = {2, 3, 6, 9, 10};

    cout << check_is_arr_sorted(arr, n);
}

string check_is_arr_sorted(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return "false";
        }
    }

    return "true";
}
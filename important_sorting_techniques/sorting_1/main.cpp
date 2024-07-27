#include <iostream>
using namespace std;

void selection_sort(int n, int arr[]);

int main()
{

    // selection sort
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};
    
    selection_sort(n, arr);

    for (int i : arr)
    {
        cout << i << " ";
    }
}

void selection_sort(int n, int arr[])
{

    for (int i = 0; i < n; i++)
    {
        /*
            {9,46,24,52,20,13} i = 0
            {9,13,24,52,20,46} i = 1
            {9,13,24,52,20,46} i = 2
        */
        int min_index = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
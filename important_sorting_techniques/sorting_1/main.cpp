#include <iostream>
using namespace std;

void selection_sort(int n, int arr[]);
void bubble_sort(int n, int arr[]);
void insertion_sort(int n, int arr[]);

int main()
{

    // selection sort
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};

    // selection_sort(n, arr);
    // bubble_sort(n, arr);
    insertion_sort(n, arr);

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

void bubble_sort(int n, int arr[])
{
    // int arr[n] = {13, 46, 24, 52, 20, 9};

    /*
       {13,24,46,20,9,52}
       {13,24,20,9,46}
       {13,20,9,24}
       {13,9,20}
       {9,13}
       {9,13}
    */

    for (int i = 0; i < n - 1; i++)
    {
        int is_swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                is_swapped = 1;
            }
        }

        if (is_swapped == 0)
        {
            break;
        }
    }
}

void insertion_sort(int n, int arr[])
{

    // int arr[n] = {13, 46, 24, 52, 20, 9};

    /*
        i = 0 {13,46} {13,46,24,52,20,9}
        i = 1 {13,46,24} {13,24,46,52,20,9}
        i = 2 {13,24,46,52} {13,24,46,52,20,9}
        i = 3 {13,24,46,52,20} {13,20,24,46,52,9}
        i = 4 {13,20,24,46,52,9} {9,13,20,24,46,52}


        n = 6;

        outerLoop = n - 1;
        innerLoop = i + 1;
    */

    // {13, 46, 24, 15, 20, 9};
    /*
        i = 1;
        j = 1;

        i = 1 = {13,46}
        i = 2 = {13,24,46}
        i = 3 = {13,24,15,46}
    */

    for (int i = 1; i < n; i++)
    {
        int current_index = i;
        for (int j = i; j > 0; j--)
        {
            if (arr[j - 1] > arr[current_index])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[current_index];
                arr[current_index] = temp;

                current_index--;
            }
        }
    }
}

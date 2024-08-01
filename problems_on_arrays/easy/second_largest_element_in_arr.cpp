#include <iostream>
using namespace std;

int find_second_largest_element_in_array(int arr[], int n);

int main()
{

    int n = 5;
    int arr[n] = {12, 35, 1, 10, 34, 1};

    find_second_largest_element_in_array(arr, n);
};

int find_second_largest_element_in_array(int arr[], int n)
{

    int largest_element = arr[0];
    int second_largest_element = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest_element)
        {
            second_largest_element = largest_element;
            largest_element = arr[i];
        }
        else if (arr[i] > second_largest_element && arr[i] != largest_element)
        {
            second_largest_element = arr[i];
        }
    }

    cout << "largest :" << largest_element << endl;
    cout << "second largest :" << second_largest_element << endl;

    return second_largest_element;
}

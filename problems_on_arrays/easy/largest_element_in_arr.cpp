#include <iostream>
using namespace std;

int find_largest_element_in_array(int arr[], int n);

int main()
{

    int n = 5;
    int arr[n] = {2, 19, 24, 3, 6};

    find_largest_element_in_array(arr, n);
};

int find_largest_element_in_array(int arr[], int n)
{

    int largest_element = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest_element)
        {
            largest_element = arr[i];
        }
    }

    cout << "largest :" << largest_element << endl;

    return largest_element;
}

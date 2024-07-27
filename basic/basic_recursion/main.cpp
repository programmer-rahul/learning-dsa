#include <iostream>
using namespace std;

void print_name(int n);
void print_linearly(int i, int n);
void print_linearly2(int i, int n);

void print_linearly_in_reverse(int i, int n);
void print_linearly_in_reverse2(int i, int n);

void sum_of_n_numbers(int n, int s);
int sum_of_n_numbers2(int n);
int factorial_of_n_numbers(int n);

void reverse_array_elements(int l, int r, int arr[]);
void reverse_array_elements2(int i, int n, int arr[]);

bool check_palindrome_number(int i, int n, string str);
int fibonachi_number(int i);

int main()
{

    // print_name(2);
    // print_linearly(1,5);
    // print_linearly2(6,6);

    // print_linearly_in_reverse(1,20);
    // print_linearly_in_reverse2(1,6);

    // sum_of_n_numbers(5,0);
    // cout << "sum : " << sum_of_n_numbers2(5) << endl;
    // cout << "factorial : " << factorial_of_n_numbers(5) << endl;

    int arr[9] = {2, 3, 4, 5, 6, 7, 8, 9};

    // reverse_array_elements(0 , 4 , arr);
    // cout << "len :- ",arr.length();

    // reverse_array_elements2(0, 9, arr);

    string str = "madam";
    // cout << check_palindrome_number(0, 5, str);

    cout << fibonachi_number(8);
    return 0;
}

void print_name(int n)
{
    if (n <= 0)
        return;
    cout << "Your Name" << endl;
    print_name(n - 1);
}

void print_linearly(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    i++;

    print_linearly(i, n);
}

void print_linearly2(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    print_linearly2(i, n);
    cout << i << endl;
}

void print_linearly_in_reverse(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << n << endl;
    n--;
    print_linearly_in_reverse(i, n);
}

void print_linearly_in_reverse2(int i, int n)
{
    if (i > n)
    {
        return;
    }
    print_linearly_in_reverse2(i + 1, n);
    cout << i << endl;
}

void sum_of_n_numbers(int n, int s)
{
    if (n < 1)
    {
        cout << s << endl;
        return;
    }

    sum_of_n_numbers(n - 1, s + n);
}

int sum_of_n_numbers2(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return n + sum_of_n_numbers2(n - 1);
}

int factorial_of_n_numbers(int n)
{
    if (n < 1)
    {
        return 1;
    }

    return n * factorial_of_n_numbers(n - 1);
}

void reverse_array_elements(int l, int r, int arr[])
{
    // [3,4,1,5,2]
    // [0,1,2,3,4]
    //
    int left_copy = arr[l];
    arr[l] = arr[r];
    arr[r] = left_copy;
    if (l + 1 == r - 1)
    {

        return;
    }
    reverse_array_elements(l + 1, r - 1, arr);
}

void reverse_array_elements2(int i, int n, int arr[])
{
    // i= 3 and n / 2 = 4
    if (i >= n / 2)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        return;
    }

    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;

    reverse_array_elements2(i + 1, n, arr);
}

bool check_palindrome_number(int i, int n, string str)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (str[i] != str[n - 1 - i])
    {
        return false;
    }
    return check_palindrome_number(i + 1, n, str);
}

int fibonachi_number(int i)
{
    if (i <= 1)
    {
        return i;
    }

    return fibonachi_number(i - 1) + fibonachi_number(i - 2);
}

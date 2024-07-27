#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int count_numbers(int n);
int reverse_numbers(int n);
bool check_palindrome(int n);
bool check_armstrong(int n);
void print_divisors(int n);
void print_divisors_improved(int n);
bool is_prime_number(int n);

int main()
{

  // count numbers
  // cout << "Total Number Count is :- " << count_numbers(45292);

  // reverse numbers
  // cout << "Reversed Number :- " << reverse_numbers(1234);

  // check palindrome number
  // cout << "isPalindrome : " << check_palindrome(12121);

  // check armstrong number
  // cout << "isPalindrome : " << check_armstrong(1634);

  // print all divisors of a number
  // print_divisors(40); // O(n);
  // print_divisors_improved(40); // O(n);

  // check prime number
  is_prime_number(10);
  cout << endl;
  is_prime_number(11);

  return 0;
}

int count_numbers(int n)
{
  int numberCount = 0;

  while (n > 0)
  {
    n = n / 10;
    numberCount++;
  }

  return numberCount;
};

int reverse_numbers(int n)
{
  int reversedNumber = 0;

  while (n > 0)
  {
    int lastDigit = n % 10;
    reversedNumber = reversedNumber * 10 + lastDigit;
    n = n / 10;
  }

  return reversedNumber;
}

bool check_palindrome(int n)
{
  int reversedNumber = reverse_numbers(n);

  // cout << "reversedNumber : " << reversedNumber;

  if (reversedNumber == n)
  {
    return true;
  }

  return false;
}

bool check_armstrong(int n)
{
  int calculated = 0;
  int n2 = n;

  while (n > 0)
  {
    int lastDigit = n % 10;
    n /= 10;

    calculated += lastDigit * lastDigit * lastDigit;
  }

  if (calculated == n2)
  {
    return true;
  }

  return false;
}

void print_divisors(int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
    }
  }
}
void print_divisors_improved(int n)
{
  cout << "square :" << sqrt(n) << endl;
  for (int i = 1; i <= n / 3; i++)
  {
    cout << " i:" << i;
    if (n % i == 0)
    {
      cout << i << " ";
    }
  } // O(n/3)
  if (n % 2 == 0)
  {
    cout << n / 2 << " ";
  }
  cout << n << " ";
}

bool is_prime_number(int n)
{
  bool isPrime = true;

  if (n == 0 || n == 1)
  {
    isPrime = false;
    return false;
  }

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      isPrime = false;
      break;
    }
  } // O(n);

  cout << "Number " << n << " :- " << isPrime << endl;

  return isPrime;
}

#include <iostream>

using namespace std;
// easy
void pattern1(int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << "\n";
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
  }
};

void pattern2(int n)
{

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}

void pattern3(int n)
{

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j <= i; j++)
    {
      cout << j + 1 << " ";
    }
    cout << "\n";
  }
}

void pattern4(int n)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {

      cout << i + 1 << " ";
    }

    cout << "\n";
  }
}

void pattern5(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}

// medium

/*
        *
      * * *
    * * * * *
    1 = 2 * i + 1
    3 = 2 * i + 1
    5 = 2 * i + 1
*/

void pattern6(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < n - i - 1; k++)
    {
      cout << "   ";
    }
    for (int s = 0; s < 2 * i + 1; s++)
    {
      cout << " * ";
    }
    for (int k = 0; k < n - i - 1; k++)
    {
      cout << "   ";
    }

    cout << "\n";
  }
}

/*
    * * * * *
      * * *
        *

    0 = i
    1 = i
    2 = i

     2 * (i - n) - 1;
     2 * (0 - 3) - 1;
     2 * (1 - 3) - 1; 2 * 2 -1 = 3
     2 * (2 - 3) - 1; 2 * 1 -1 = 1


*/

void pattern7(int n)
{

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < i; j++)
    {
      cout << "   ";
    }

    for (int j = 0; j < (2 * (n - i)) - 1; j++)
    {
      cout << " * ";
    }

    for (int j = 0; j < i; j++)
    {
      cout << "   ";
    }
    cout << "\n";
  }
}

/*
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *   => n - i => 9 - 5 => 4 > j
 * * *     => n - i => 9 - 6 => 3
 * *       => n - i => 9 - 7 => 2
 *         => n - i => 9 - 8 => 1
 */

void pattern8(int n)
{
  int max = (n / 2) + (n % 2);
  for (int i = 0; i < n; i++)
  {

    if (i < max)
    {
      for (int j = 0; j < max; j++)
      {
        if (i >= j)
        {
          cout << "* ";
        }
      }
    }
    else
    {
      for (int j = 0; j < n - max; j++)
      {
        if (n - i > j)
        {
          cout << "* ";
        }
      }
    }

    cout << "\n";
  }
}

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

=> i % 2 + 1 = 0 % 2 + 1 = 1
=> i % 2 + 1 = 1 % 2 + 1 =


*/

void pattern9(int n)
{

  for (int i = 0; i < n; i++)
  {
    int currentNumber = (i + 1) % 2;
    for (int j = 0; j <= i; j++)
    {
      if (currentNumber)
      {
        cout << "1 ";
        currentNumber = 0;
      }
      else
      {
        cout << "0 ";
        currentNumber = 1;
      }
    }
    cout << "\n";
  }
}

/*

1             1 = 2n - 2(i + 1) = 8 - 2 = 6
1 2         2 1 = 2n - 2(i + 1) = 8 - 4 = 4
1 2 3     3 2 1 = 2n - 2(i + 1) = 8 - 6 = 2
1 2 3 4 4 3 2 1 = 2n - 2(i + 1) = 8 - 8 = 0

[n,s,n]
[n,s,n]

*/

void pattern10(int n)
{

  for (int i = 0; i < n; i++)
  {

    // number
    for (int j = 0; j < i + 1; j++)
    {
      cout << j + 1 << " ";
    }
    // space
    for (int j = 0; j < 2 * n - 2 * (i + 1); j++)
    {
      cout << "  ";
    }
    // number
    for (int j = i; j >= 0; j--)
    {
      cout << j + 1 << " ";
    }
    cout << "\n";
  }
}

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

void pattern11(int n)
{
  int num = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      // optional
      if (num <= 9)
      {
        cout << "0";
      }
      cout << num << " ";
      num++;
    }
    cout << "\n";
  }
}

void pattern12(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char c = 'A'; c <= 'A' + i; c++)
    {
      cout << c;
    }
    cout << "\n";
  }
}

void pattern13(int n)

{
  for (int i = 0; i < n; i++)
  {
    for (char c = 'A'; c < 'A' + n - i; c++)
    {
      cout << c << " ";
    }
    cout << "\n";
  }
}

void pattern14(int n)
{
  char c = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << c << "";
    }
    c++;
    cout << "\n";
  }
}

/*
      A
    A B A
  A B C B A
A B C D C B A

[space, char]
space => n - i - 1
0 = 3 = n - i - 1 = 4 - 0 - 1 = 3
1 = 2
2 = 1
3 = 0

char => 2i + 1
0 = 1 = 1 + 2*i = 1 + 0 = 1
1 = 3 = 1 + 2*i = 1 + 2 = 3 = 3 / 2 = (2i + 1) / 2  + 1=
2 = 5 = 1 + 2*i = 1 + 4 = 5
3 = 7 = 1 + 2*i = 1 + 6 = 7

(2i + 1) / 2 + (2i + 1) % 2 = 2  = j + 1

*/

void pattern15(int n)
{
  for (int i = 0; i < n; i++)
  {

    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }

    // char
    char c = 'A';
    int length = 2 * i + 1;
    for (int j = 0; j < length; j++)
    {
      cout << c << " ";
      if (length / 2 > j)
      {
        c++;
      }
      else
      {
        c--;
      }
    }

    cout << "\n";
  }
}

/*
E
E D
E D C
E D C B
E D C B A
*/

void pattern16(int n)
{
  for (int i = 0; i < n; i++)
  {
    char c = 'A' + n - 1;
    for (int j = 0; j <= i; j++)
    {
      cout << c << " ";
      c--;
    }
    cout << "\n";
  }
}

/*
* * * * * * * * * *  = n / 2 - i = 10 / 2 - 0 = 5 - 0 = 5
* * * *     * * * *  = n / 2 - i = 10 / 2 - 1 = 5 - 1 = 4
* * *         * * *  = n / 2 - i = 10 / 2 - 2 = 5 - 2 = 3
* *             * *
*                 *  = n / 2 - i = 10 / 2 - 4 = 5 - 4 = 1
*                 *  = n / 2 - i = 10 / 2 - 5 = 5 - 5 - 1 = 0 = 1
* *             * *  = n / 2 - i = 10 / 2 - 6 = 5 - 6 - 2 = -1 = 2
* * *         * * *  = n / 2 - i + 1 =  7 + 1 + 5 = 3
* * * *     * * * *
* * * * * * * * * *

n/2 - i = 5 - 5 = 0 = 1
n/2 - i = 5 - 6 = 1 = 2
n/2 - i = 5 - 7 = 2 = 3

if(n / 2 <= i) = starsCount =   i + 1 - n / 2

stars,spaces,stars
stars,spaces,stars

starsCount = n / 2 - i;
spacesCount = n - 2 * starsCount;
*/
void pattern17(int n)
{
  for (int i = 0; i < n; i++)
  {
    int starsCount = (n / 2) + (n % 2) - i;
    if (i >= n / 2)
    {
      starsCount = i + 1 - n / 2;
    }
    int spacesCount = n - 2 * starsCount;
    // stars
    for (int j = 0; j < starsCount; j++)
    {
      cout << "* ";
    }
    // spaces
    for (int j = 0; j < spacesCount; j++)
    {
      cout << "  ";
    }
    // stars
    for (int j = 0; j < starsCount; j++)
    {
      cout << "* ";
    }

    cout << "\n";
  }
}

/*
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *  = 9 - 5 = 4
* * *         * * *  = 9 - 6 = 3
* *             * *
*                 *

starsCount = i + 1;
spacesCount = n - 2 * starsCount + 1;

if(i >= (n / 2) + (n % 2)) = starsCount = n - i

stars,spaces,stars
stars,spaces,stars

*/

void pattern18(int n)
{
  for (int i = 0; i < n; i++)
  {
    int starCount = i + 1;
    if (i >= n / 2 + n % 2)
    {
      starCount = n - i;
    }
    int spacesCount = n - 2 * starCount + 1;

    // stars
    for (int j = 0; j < starCount; j++)
    {
      cout << "* ";
    }
    // spaces
    for (int j = 0; j < spacesCount; j++)
    {
      cout << "  ";
    }
    // stars
    for (int j = 0; j < starCount; j++)
    {
      cout << "* ";
    }

    cout << "\n";
  }
}

/*
* * * *
*     *
*     *
* * * *

stars , spaces , stars

  if(i == 0 || i == n - 1) {
  starCount = n / 2;
  spacesCount = 0;
  }
  else {
  starCount = 1;
  spacesCount = n - 2;
  }


*/

void pattern19(int n)
{
  int starCount, spacesCount;

  for (int i = 0; i < n; i++)
  {
    if (i == 0 || i == n - 1)
    {
      starCount = n / 2;
      spacesCount = 0;
    }
    else
    {
      starCount = 1;
      spacesCount = n - 2;
    }

    // stars
    for (int j = 0; j < starCount; j++)
    {
      cout << "* ";
    }
    // spaces
    for (int j = 0; j < spacesCount; j++)
    {
      cout << "  ";
    }
    // stars
    for (int j = 0; j < starCount; j++)
    {
      cout << "* ";
    }

    cout << "\n";
  }
}

/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

2 2 2
2 1 2
2 3 2

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3

[n n n n n]
[n n-1 n-1 n-1 n]
[n n-1 n-2 n-1 n]

*/

void pattern20(int n)
{
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      cout << n << " ";
    }

    cout << "\n";
  }
}

int main()
{
  pattern20(5);
  cout << "\n------------------------------------------\n";
  pattern20(9);
  return 0;
}
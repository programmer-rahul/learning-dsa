#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 7;
    int hash_max = 4;
    int numbers[n] = {1, 2, 0, 3, 2, 1, 2};
    int hashed_numbers[hash_max] = {0};
    map<int, int> hashed_numbers_map;

    for (int i = 0; i < n; i++)
    {
        // using array
        hashed_numbers[numbers[i]]++;

        // using map
        hashed_numbers_map[numbers[i]]++;
    }

    for (auto c : hashed_numbers_map)
    {
        // cout << c.first << "->" << c.second << endl;
    }

    char characters[n] = {'c', 'a', 'b', 's', 'a', 'x', 'z'};
    int hashed_characters[26] = {0};
    map<char, int> hashed_characters_map;

    for (int i = 0; i < n; i++)
    {
        // for array
        hashed_characters[characters[i] - 97]++;

        // for map
        hashed_characters_map[characters[i]]++;
    }
    for (auto c : hashed_characters_map)
    {
        cout << c.first << "->" << c.second << endl;
    }
};

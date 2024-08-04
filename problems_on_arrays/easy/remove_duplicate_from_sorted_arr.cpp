#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int remove_duplicate_from_sorted_arr_brute(int arr[], int n);
int remove_duplicate_from_sorted_arr_optimal(int arr[], int n);

int main()
{

    int n = 6;
    int arr[n] = {3,6,8,8,9,9};

    // cout << remove_duplicate_from_sorted_arr_brute(arr, n);
    cout << remove_duplicate_from_sorted_arr_optimal(arr, n);
};

int remove_duplicate_from_sorted_arr_brute(int arr[], int n)
{   

    int lastNum = arr[0];
    int uniqueCount = 1;

    for(int i = 1; i < n ; i++){
        if(arr[i] == lastNum){
            arr[i] = '_';
        }
        else{
            lastNum = arr[i];
            uniqueCount ++;
        }
    }

    int lastIndex = -1;

    for(int i = 1 ; i < n ; i++){
        if(arr[i] != '_' && lastIndex != -1){
            swap(arr[i],arr[lastIndex]);
            lastIndex ++;
        }
        else if(lastIndex == -1 && arr[i] == '_'){
            lastIndex = i;
        }
    }
    return uniqueCount;
}


int remove_duplicate_from_sorted_arr_optimal(int arr[],int n){
    int i = 0;
    int j = 1;

    while(j < n){
        if(arr[j] != arr[i]){
            swap(arr[j],arr[i+1]);
            i++;
        }
        j++;
    }
    return i+1;
}
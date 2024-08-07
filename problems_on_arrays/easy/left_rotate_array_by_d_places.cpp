#include <iostream>
using namespace std;

void left_rotate_an_array_by_d_place1(int arr[] , int n,int d);
void left_rotate_an_array_by_d_place2(int arr[] , int n,int d);

void reverse(int arr[],int start,int end);

int main() {

    int n = 6;
    int arr[n] = {2,4,6,7,8,9}; 

    int d = 4;

    // brute 
    // left_rotate_an_array_by_d_place1(arr,n,d);

    // optimal
    left_rotate_an_array_by_d_place2(arr,n,d);


    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void left_rotate_an_array_by_d_place1(int arr[] , int n,int d)
{
    d = d % n;
    int temp[d]; 

    for(int i = 0 ; i < d ; i++){
        temp[i] = arr[i];
    }

    for(int i = 0; i < n - d ; i++){

        arr[i] = arr[i + d];
    } 

    for(int i = 0; i < d ; i++){
        arr[n - d + i] = temp[i];
    }

}

void left_rotate_an_array_by_d_place2(int arr[] , int n , int d){
    d = d % n;

    reverse(arr,0,d);
    reverse(arr,d,n);
    reverse(arr,0,n); 
}

void reverse(int arr[],int start,int end){
    for(int i = 0 ; i < (end - start) / 2 ; i++){
        swap(arr[i + start], arr[end - i - 1]);
    }
}
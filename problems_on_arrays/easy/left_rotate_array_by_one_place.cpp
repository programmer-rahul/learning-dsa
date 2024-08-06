#include <iostream>
using namespace std;

void left_rotate_an_array_by_one_place1(int arr[] , int n);
void left_rotate_an_array_by_one_place2(int arr[] , int n);

int main() {

    int n = 5;
    int arr[n] = {2,4,6,8,9}; 

    // left_rotate_an_array_by_one_place1(arr,n);
    left_rotate_an_array_by_one_place2(arr,n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}


void left_rotate_an_array_by_one_place1(int arr[],int n){

    for(int i = 0 ; i < n - 1 ; i++){
        swap(arr[i],arr[i+1]);   
    }
}

void left_rotate_an_array_by_one_place2(int arr[],int n){

    int temp = arr[0];
    for(int i = 0;i < n - 1 ; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
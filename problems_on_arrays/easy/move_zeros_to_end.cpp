#include <iostream>
using namespace std;

void move_zeros_to_end1(int arr[],int n);
void move_zeros_to_end2(int arr[],int n);

int main (){

    int n = 8;
    int arr[n] = {1,2,0,3,0,0,4,0};

    // brute
    // move_zeros_to_end1(arr,n);
    move_zeros_to_end2(arr,n);

    // optimal

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}

void move_zeros_to_end1(int arr[],int n){

    int temp[n] = {};

    int j = 0;
    for(int i = 0 ; i < n; i++){
        if(arr[i] != 0){
            temp[j] = arr[i];
            j++;
        }
    }

    j = 0;

    for(int i = 0; i < n; i++){
        arr[i] = temp[j];
        j++;
    }

    // tc = O(n) + O(n) = O(2n)
    // sc = O(n);
}


void move_zeros_to_end2(int arr[],int n){

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            for(int j = i+1; j < n; j++){
                if(arr[j] != 0){
                    swap(arr[i],arr[j]);
                    break;
                }   
            }
        }
    }

    // tc = O(n) * O(n) = O(n^2)
    // sc = O(1)
}
#include <iostream>
using namespace std;

// brute 
int missing_number1 (int arr[],int n);

// improved  
int missing_number2 (int arr[],int n);

// optimal 
int missing_number3 (int arr[],int n);
int missing_number4 (int arr[],int n);

int main(){

    int n = 6;
    int arr[n - 1] = {1,2,3,4,6};

    // brute 
    // cout << missing_number1(arr,n);

    // improved 
    // cout << missing_number2(arr,n);

    // optimal 
    // cout << missing_number3(arr,n);
    cout << missing_number4(arr,n);

}

int missing_number1(int arr[],int n){

    for(int i = 1; i <= n ; i++ ){
        int isHere = false;
        for(int j = 0; j < n ; j++ ){
            if(i == arr[j]){
                isHere = true;
                break;
            }
        }
        if(!isHere) return i;
    }

    // tc = O(n) * O(n) = O(n^2)
    // sc = O(1)

    return -1;
}
int missing_number2(int arr[],int n){
    // hashing

    int hashedArr[n] = {};
    for(int i = 0 ; i < n - 1 ; i++){
        hashedArr[arr[i] - 1] += 1; 
    }

    for(int i = 0 ; i < n;i++){
        if(hashedArr[i] == 0){
            return i+1;
        }
    }

    // tc = O(n) + O(n) = O(2n)
    // sc = O(n)

    return -1;
}

int missing_number3(int arr[],int n){
    // sum 
    int sum1 = (n * (n + 1)) / 2; 
    int sum2 = 0;

    for(int i = 0 ; i < n - 1 ; i++){
        sum2 += arr[i];
    }

    // tc = O(n-1)
    // sc = O(1)

    return sum1 - sum2;
}

int missing_number4(int arr[],int n){
    // xor 

    int xor1 = 0;
    int xor2 = 0;

    for(int i = 1; i < n; i ++){
        xor1 = xor1 ^ i;
        xor2 = xor2 ^ arr[i-1];
    }

    xor1 = xor1 ^ n;

    // tc = O(n)
    // sc = O(1)

    return xor2 ^ xor1;

}

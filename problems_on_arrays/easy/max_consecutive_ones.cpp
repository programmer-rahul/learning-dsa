#include <iostream>
using namespace std;

int max_consecuting_ones1(int arr[],int n);

int main(){

    int n = 9;
    int arr[n] = {1,1,1,1,0,1,0,0,1}; 

    max_consecuting_ones1(arr,n);
}

int max_consecuting_ones1(int arr[],int n){
    int max = 0; 
    int count = 0;

    for(int i = 0; i < n ; i++){
        if(arr[i] == 1){
            count++;
        }
        else {
            if(count > max) max = count;
            count = 0;
        }
    }

    // tc = O(n)
    // sc = O(1)

    cout << max << endl;

    return max;
}


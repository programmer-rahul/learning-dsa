#include <iostream>
using namespace std;

int linear_search(int arr[],int n, int num);

int main(){

    int n = 5;
    int arr[n] = {2,4,8,1,2};
    int num = 3;

    cout << linear_search(arr,n,num);
}

int linear_search(int arr[],int n, int num){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == num){
            return i;
            break;
        }
    }

    return -1;
}

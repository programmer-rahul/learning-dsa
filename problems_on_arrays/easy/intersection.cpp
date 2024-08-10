#include <bits/stdc++.h>
using namespace std;

void intersection1(int arr1[],int arr2[],int n1,int n2);
void intersection2(int arr1[],int arr2[],int n1,int n2);


int main() {
    int n1 = 5;
    int n2 = 5;

    int arr1[n1] = {3,3,4,5,6}; 
    int arr2[n2] = {3,4,5,6,7}; 

    // brute 
    // intersection1(arr1,arr2,n1,n2);

    // optimal 
    intersection2(arr1,arr2,n1,n2);
}

void intersection1(int arr1[],int arr2[],int n1,int n2){
    vector<int> vect;

    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n2 ; j++){
        if(arr1[i] == arr2[j]){
            vect.push_back(arr1[i]);
            break;
        }
    }    }
    int i = 0;
    int j = 0;

    int intersectedArr[vect.size()];
    int index = 0;

    for(auto it : vect) {
        cout << it << " ";
        intersectedArr[index] = it;
    }
}


void intersection2(int arr1[],int arr2[],int n1,int n2){
    vector<int> vect;

    int i = 0;
    int j = 0;

    while(i < n1 && j < n2){
        if(arr1[i] == arr2[j]){
            vect.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
    }

    int intersectedArr[vect.size()];
    int index = 0;

    for(auto it : vect) {
        cout << it << " ";
        intersectedArr[index] = it;
    }
}
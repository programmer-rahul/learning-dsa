#include <bits/stdc++.h>
using namespace std;

void union1(int arr1[],int arr2[],int n1,int n2);

int main(){

    int n1 = 4;
    int n2 = 5;

    int arr1[n1] = {2,3,4,5}; 
    int arr2[n2] = {3,4,5,6,7}; 

    // brute 
    union1(arr1,arr2,n1,n2);

    // optimal 
    union2(arr1,arr2,n1,n2);

}

void union1(int arr1[],int arr2[],int n1,int n2){       

    set<int> st;

    for(int i = 0 ; i < n1; i++){
        st.insert(arr1[i]);
    }

    for(int i = 0 ; i < n2; i++){
        st.insert(arr2[i]);
    }   

    int un[st.size()]; 
    int i = 0;

    for(auto it : st){
        un[i++] = it;  
    }

    // tc = O(n1 log n) + O(n2 log n) + O(n1 + n2) 
    // sc = O(n1 + n2) + O(n1 + n2)

}

void union2(int arr[],int arr2[],int n1, int n2){
    // int arr1[n1] = {2,3,4,5}; 
    // int arr2[n2] = {3,4,5,6,7}; 

    /*
                 i          
        {2,3,4,4,5}
         
             j
        {3,4,5,6,7}

        {2,3,4}
    */

    vector<int> unionArr;         

    int i = 0;
    int j = 0;

    while(){
        if(arr1[i] < arr2[j]){
            unionArr.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i] > arr2[j]){

            if(unionArr.back() == arr[j]){
                j++;
                continue;
            }

            unionArr.push_back(arr2[j]);
            j++;
        }
        else if(arr1[i] == arr2[j]){
            if(unionArr.back() == arr1[i]){
                i++; 
                continue;
            }
            unionArr.push_back(arr1[i]);
            i++;    
        }
    }
   
}

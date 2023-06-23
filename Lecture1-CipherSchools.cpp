#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[],int n,int m){
    int i = n-1; 
    int j=m-1;
    int k = m+n-1;
    while(i >= 0 && j >= 0){
        if(arr1[i] >= arr2[j] ){
            arr1[k] = arr1[i];
            i--;
            k--;
        }
        else{
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }
    if(j >= 0){
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}
int main(){
    int arr1[8] = {1,4,5,6};
    int arr2[4] = {2,3,4,8};
    merge(arr1,arr2,4,4);
    for(int i=0; i<8; i++){
        cout << arr1[i] << " , ";
    }
}
#include <bits/stdc++.h>
using namespace std;

int solve(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int index = 0;
    while(start <= end){
        if(arr[mid] == target){
            index = mid;
            end = mid;
        }
        else if(arr[mid] > target){
            end = mid;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return index;
}
int main(){
    int arr[] = {1,2,3,4,4,4,5,6,7};
    int ans = solve(arr,9,4);
    cout << ans;
}
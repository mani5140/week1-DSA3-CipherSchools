#include <bits/stdc++.h>
using namespace std;
void solve(int arr[],int n){
    int s = 0;
    int e = n-1;
    int m = 0;
    while(m <= e){
        if(arr[m] == 2){
            swap(arr[m],arr[e]);
            e--;
        }
        if(arr[m] == 0){
            swap(arr[s],arr[m]);
            s++;
            m++;
        }
        if(arr[m] == 1){
            m++;
        }
    }
}
int main(){
    int arr[] = {0,1,2,2,1,1,0};
    solve(arr,7);
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
}
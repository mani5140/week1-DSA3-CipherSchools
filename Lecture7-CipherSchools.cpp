// find the pivot index

#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int preSum = 0;
        for(int i=0; i<nums.size(); i++){
            preSum += nums[i];
        }
        int l = 0;
        int r = preSum;
        for(int i=0; i<nums.size(); i++){
            r -= nums[i];
            if(l == r){
                return i;
            }
            
            l += nums[i];
        }
        return -1;
    }
int main(){
    vector<int> nums = {1,7,3,6,5,6};
    int ans = pivotIndex(nums);
    cout << ans;
}

// Search in rotated sorted array

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> nums,int target){
    int s = 0;
    int e = nums.size() -1;
    int mid = s+(e-s)/2;
    while(s <= e){
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[s] <= nums[mid]){
            if(nums[s] <= target && nums[mid] >= target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
            if(nums[mid] <= target && nums[e] >= target){
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int ans = solve(nums,0);
    cout << ans;
}
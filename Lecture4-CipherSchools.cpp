#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> v;
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;

        while(1)
        {
            if(left>right)
            break;

            for(int i=left;i<=right;i++)
            {
                v.push_back(matrix[top][i]);

            }
            top++;

            if(bottom<top)
            break;

            for(int i=top;i<=bottom;i++)
            {
                v.push_back(matrix[i][right]);
            }

            right--;


            if(left>right)
            break;

            for(int i=right;i>=left;i--)
            {
                v.push_back(matrix[bottom][i]);
            }
            bottom--;

            if(top>bottom)
            break;

            for(int i=bottom;i>=top;i--)
            {
                v.push_back(matrix[i][left]);
            }
            left++;

        }

        return v;

    }

int main(){
    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans = spiralOrder(v);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}
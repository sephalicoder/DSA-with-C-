
/* Author: Sephali 
   Date: 17-09-25
   Description: PERMUTATION
*/

#include <bits/stdc++.h>
using namespace std;


class Solution {

    private:
       void solve(vector<int> nums,   vector<vector<int>> &ans, int index ){
            //base condition 
            if(index >= nums.size()){
            ans.push_back(nums);
            return;
            }
            else {
                for(int j= index; j< nums.size(); j++){
                
                swap(nums[index], nums[j]);
                solve(nums, ans , index+1);
                // backtracking 
                swap(nums[index], nums[j]);
                
                }
            }

        }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index= 0;
        solve( nums, ans , index);
        return ans;
    }
};

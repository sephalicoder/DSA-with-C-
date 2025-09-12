
/* Author: Sephali 
  Date: 12-09-25
  Description: Two Sum array problem */ 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // check if complement exists in map
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // store current number with its index
            mp[nums[i]] = i;
        }

        return {}; // just in case, though problem guarantees a solution
    }
};



/* Author: Sephali 
   Date: 17-09-25
   Description: Find First and Last Position of Element in Sorted Array
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int firstOcc(vector<int>& nums, int n, int target) {
        int s = 0, e = n - 1, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;   // recalc mid each loop
            if (nums[mid] == target) {
                ans = mid;
                e = mid - 1;   // search left
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;   // ✅ return after loop
    }

    int lastOcc(vector<int>& nums, int n, int target) {
        int s = 0, e = n - 1, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;
                s = mid + 1;   // search right
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;   // ✅ return after loop
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2, -1);   // default [-1, -1]
        ans[0] = firstOcc(nums, n, target);
        ans[1] = lastOcc(nums, n, target);
        return ans;
    }
};

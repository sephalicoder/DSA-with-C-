

/* Author: Sephali 
   Date: 17-09-25
   Description: SEARCH INSERT POSTION
*/

#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
 int searchInsert(vector<int>&nums, int target){
     int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low <= high) { 
            mid = low + (high - low) / 2;

            if (nums[mid] == target) {
             
                return mid;
            } else if (nums[mid] < target) {
               
                low = mid + 1;
            } else { 
                high = mid - 1;
            }
        }

  return low; 
 }
};

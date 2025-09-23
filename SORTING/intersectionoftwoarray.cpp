
/* Author: Sephali 
   Date: 17-09-25
   Description: INTERSECTION OF TWO ARRAYS
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        for(int i=0; i< nums1.size(); i++){
            int element = nums1[i];
        
        for( int j=0; j<nums2.size(); j++){
            if( element == nums2[j]){

                //  check if element is already in ans
                    if(find(ans.begin(), ans.end(), element) == ans.end()) {
                        ans.push_back(element);
                    }
                    nums2[j]= -1222;
                break;
            }  

            }
    
        }
        
      return ans;
        }

     
};

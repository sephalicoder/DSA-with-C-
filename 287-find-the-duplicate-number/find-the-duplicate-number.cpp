class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen; 
   
        for( int num: nums){
            if(!seen.insert(num).second){
                return num; 
            }

        }
         return -1;
        
    }
};
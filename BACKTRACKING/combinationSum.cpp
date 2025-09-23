

/* Author: Sephali 
   Date: 17-09-25
   Description: COMBINATION SUM
*/

#include <bits/stdc++.h>
using namespace std;



#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> result;
        std::vector<int> currentCombination;
        
        // Sorting candidates allows for an optimization to prune search branches early.
        std::sort(candidates.begin(), candidates.end());
        
        findCombinations(0, target, candidates, currentCombination, result);
        
        return result;
    }

private:
    void findCombinations(int startIndex, int remainingTarget, std::vector<int>& candidates, 
                          std::vector<int>& currentCombination, std::vector<std::vector<int>>& result) {
        
        // Base Case 1: A valid combination is found.
        if (remainingTarget == 0) {
            result.push_back(currentCombination);
            return;
        }

        // Explore candidates.
        for (int i = startIndex; i < candidates.size(); ++i) {
            // Optimization: If the current candidate is larger than the remaining target,
            // all subsequent candidates will also be too large (since the array is sorted).
            // We can stop exploring this path.
            if (candidates[i] > remainingTarget) {
                break;
            }
            
            // 1. Choose: Add the current candidate to our combination.
            currentCombination.push_back(candidates[i]);
            
            // 2. Explore: Recursively call the function to find the rest of the combination.
            // We pass 'i' as the new startIndex, not 'i + 1', because we are
            // allowed to reuse the same number an unlimited number of times.
            findCombinations(i, remainingTarget - candidates[i], candidates, currentCombination, result);
            
            // 3. Unchoose (Backtrack): Remove the candidate to explore other possibilities.
            currentCombination.pop_back();
        }
    }
};

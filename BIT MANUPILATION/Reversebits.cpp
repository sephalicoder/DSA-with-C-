/* Author: Sephali
   Date: 23-09-25
   Description: Reverse Bits problem */

#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; i++) {
            result <<= 1;        // shift result left
            result |= (n & 1);   // add last bit of n
            n >>= 1;             // move to next bit
        }
        return result;
    }
};

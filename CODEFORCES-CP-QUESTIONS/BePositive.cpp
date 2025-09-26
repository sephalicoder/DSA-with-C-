
/* Author: Sephali 
   Date: 26-09-25
   Description:  Be Positive */ 



#include <iostream>
#include <vector>
#include <numeric>

// Function to solve a single test case
void solve() {
    int n;
    std::cin >> n;
    
    long long cost = 0;
    int neg_count = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        if (a == 0) {
            cost++; // Each 0 must become a 1, costing 1 operation.
        } else if (a == -1) {
            neg_count++; // Count the number of negative ones.
        }
    }
    
    // If the number of negative elements is odd, we need to fix it.
    if (neg_count % 2 != 0) {
        cost += 2; // The cheapest fix is changing one -1 to 1, costing 2 operations.
    }
    
    std::cout << cost << std::endl;
}

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

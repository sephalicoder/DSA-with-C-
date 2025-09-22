/* Author: Sephali 
   Date: 22-09-25
   Description: Searching at ith position 
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100]; // Fixed size for simplicity
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\n--- Array Operations ---\n";

// 2. Searching element at ith position
    cout << "\nEnter position to search (0-based index): ";
    cin >> pos;
    if (pos >= 0 && pos < n) {
        cout << "Element at position " << pos << " is " << arr[pos] << endl;
    } else {
        cout << "Invalid position!\n";
    }

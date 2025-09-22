/* Author: Sephali 
   Date: 22-09-25
   Description: Deleting at ith position 
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

// Deleting element at ith position
    cout << "\nEnter position to delete (0-based index): ";
    cin >> pos;
    if (pos >= 0 && pos < n) {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1]; // shift left
        }
        n--;
        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    } else {
        cout << "Invalid position!\n";
    }

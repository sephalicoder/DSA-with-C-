/* Author: Sephali 
   Date: 22-09-25
   Description: Insertion at ith position 
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

    // Insertion at ith position
    int pos, val;
    cout << "\nEnter position to insert (0-based index): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    if (pos >= 0 && pos <= n) {
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1]; // shift right
        }
        arr[pos] = val;
        n++;
        cout << "Array after insertion: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    } else {
        cout << "Invalid position!\n";
    }

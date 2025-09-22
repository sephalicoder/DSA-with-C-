/* Author: Sephali
   Date: 12-09-25
   Description: Delete character at ith position in a string
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int pos;
    cout << "Enter position to delete (0-based index): ";
    cin >> pos;

    if (pos >= 0 && pos < str.size()) {
        str.erase(str.begin() + pos);
        cout << "String after deletion: " << str << endl;
    } else {
        cout << "Invalid position!\n";
    }
    return 0;
}

/* Author: Sephali
   Date: 12-09-25
   Description: Insert character at ith position in a string
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int pos;
    char ch;
    cout << "Enter position to insert (0-based index): ";
    cin >> pos;
    cout << "Enter character to insert: ";
    cin >> ch;

    if (pos >= 0 && pos <= str.size()) {
        str.insert(str.begin() + pos, ch);
        cout << "String after insertion: " << str << endl;
    } else {
        cout << "Invalid position!\n";
    }
    return 0;
}

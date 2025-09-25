/* Author: Sephali
   Date: 25-09-2025
   Description: Linked List basic operation Update
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Update node value at given position
void update(Node* head, int pos, int newVal) {
    Node* temp = head;
    int index = 0;
    while (temp && index < pos) {
        temp = temp->next;
        index++;
    }
    if (temp) temp->data = newVal;
    else cout << "Position not found!\n";
}

/* Author: Sephali
   Date: 25-09-2025
   Description: Linked List basic operation: Insert
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at the end of the list
void insert(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

/* Author: Sephali
   Date: 25-09-2025
   Description: Linked List basic operations Delete
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Delete a node by value
void remove(Node*& head, int value) {
    if (!head) return;

    if (head->data == value) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != value) temp = temp->next;
    if (temp->next) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    } else {
        cout << "Value not found!\n";
    }
}

// Search a value in the list
bool search(Node* head, int value) {
    while (head) {
        if (head->data == value) return true;
        head = head->next;
    }
    return false;
}


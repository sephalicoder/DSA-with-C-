/* Author: Sephali
   Date: 25-09-2025
   Description: Queue basic operations  Delete

#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }
// Delete element (Dequeue)
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!\n";
            return;
        }
        cout << "Deleted: " << arr[front++] << endl;
    }

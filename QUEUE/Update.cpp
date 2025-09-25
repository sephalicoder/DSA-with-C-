/* Author: Sephali
   Date: 25-09-2025
   Description: Queue basic operations  Update
*/

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
// Update element at position
    void update(int pos, int newVal) {
        if (front == -1 || pos < 0 || pos > rear - front) {
            cout << "Invalid position!\n";
            return;
        }
        arr[front + pos] = newVal;
    }

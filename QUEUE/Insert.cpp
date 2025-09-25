/* Author: Sephali
   Date: 25-09-2025
   Description: Queue basic operations Insert
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


    // Insert element (Enqueue)
    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow!\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
    }

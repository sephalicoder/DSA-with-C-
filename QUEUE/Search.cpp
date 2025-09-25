/* Author: Sephali
   Date: 25-09-2025
   Description: Queue Search
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

    void enqueue(int value) {
        if (rear == SIZE - 1) return;
        if (front == -1) front = 0;
        arr[++rear] = value;
    }

    bool search(int value) {
        for (int i = front; i <= rear; i++) {
            if (arr[i] == value) return true;
        }
        return false;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Searching 30: " << (q.search(30) ? "Found\n" : "Not Found\n");
    cout << "Searching 50: " << (q.search(50) ? "Found\n" : "Not Found\n");

    return 0;
}

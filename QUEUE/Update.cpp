/* Author: Sephali
   Date: 25-09-2025
   Description: Queue Update
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

    void update(int pos, int newVal) {
        if (front == -1 || pos < 0 || pos > rear - front) {
            cout << "Invalid position!\n";
            return;
        }
        arr[front + pos] = newVal;
        cout << "Updated position " << pos << " with " << newVal << endl;
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

    cout << "Before update:\n";
    q.display();

    q.update(1, 25);
    cout << "After update:\n";
    q.display();
    return 0;
}

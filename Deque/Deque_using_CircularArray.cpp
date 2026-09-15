#include <iostream>
using namespace std;

#define N 5

int dequeArr[N];
int front = -1;
int rear = -1;

void enqueueFront(int x) {
    if (front == -1 && rear == -1) {
        front = rear = 0;
        dequeArr[front] = x;
    }
    else if ((rear + 1) % N == front) {
        cout << "Queue is full, Overflow" << endl;
    }
    else if (front == 0) {
        front = N - 1;
        dequeArr[front] = x;
    }
    else {
        front = front - 1;
        dequeArr[front] = x;
    }
}

void enqueueRear(int x) {
    if (front == -1 && rear == -1) {
        front = rear = 0;
        dequeArr[rear] = x;
    }
    else if ((rear + 1) % N == front) {
        cout << "Queue is full, Overflow" << endl;
    }
    else {
        rear = (rear + 1) % N;
        dequeArr[rear] = x;
    }
}

void dequeueFront() {
    if (front == -1 && rear == -1) {
        cout << "No element in deque, Underflow" << endl;
    }
    else if (front == rear) {
        cout << "Dequeued element is " << dequeArr[front] << endl;
        front = rear = -1;
    }
    else {
        cout << "Dequeued element is " << dequeArr[front] << endl;
        front = (front + 1) % N;
    }
}

void dequeueRear() {
    if (front == -1 && rear == -1) {
        cout << "No element in deque, Underflow" << endl;
    }
    else if (front == rear) {
        cout << "Dequeued element is " << dequeArr[rear] << endl;
        front = rear = -1;
    }
    else if (rear == 0) {
        cout << "Dequeued element is " << dequeArr[rear] << endl;
        rear = N - 1;
    }
    else {
        cout << "Dequeued element is " << dequeArr[rear] << endl;
        rear = rear - 1;
    }
}

void display() {
    if (front == -1) {
        cout << "Deque is empty" << endl;
        return;
    }

    int i = front;
    cout << "Elements of deque are: ";

    while (i != rear) {
        cout << dequeArr[i] << " ";
        i = (i + 1) % N;
    }

    cout << dequeArr[rear] << endl;
}

int main() {
    enqueueFront(10);
    enqueueFront(20);
    enqueueRear(30);
    enqueueRear(40);

    display();

    dequeueRear();

    display();

    return 0;
}
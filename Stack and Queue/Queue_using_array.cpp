#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear, size;

public:
    Queue(int s)
    {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if (rear == size - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = value;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Deleted Element: " << arr[front] << endl;
        front++;
    }

    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    q.enqueue(40);
    q.enqueue(50);

    q.display();

    return 0;
}
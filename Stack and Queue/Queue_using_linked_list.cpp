#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Queue
{
    Node *front, *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (front == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow\n";
            return;
        }

        Node *temp = front;
        cout << "Deleted Element: " << front->data << endl;

        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty\n";
            return;
        }

        Node *temp = front;

        cout << "Queue: ";

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Queue q;

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
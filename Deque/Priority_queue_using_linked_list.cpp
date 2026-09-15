#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class PriorityQueue {
    Node* front;
public:
    PriorityQueue() {
        front = NULL;
    }

    void insert(int x) {
        Node* newNode = new Node(x);
        if (front == NULL || x > front->data) {
            newNode->next = front;
            front = newNode;
        }
        else {
            Node* temp = front;
            while (temp->next != NULL &&
                   temp->next->data > x) {
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void deleteHighest() {
        if (front == NULL) {
            cout << "Priority Queue Empty" << endl;
            return;
        }

        Node* temp = front;
        cout << "Deleted Element = "
             << front->data << endl;

        front = front->next;

        delete temp;
    }

    void display() {
        if (front == NULL) {
            cout << "Priority Queue Empty" << endl;
            return;
        }

        Node* temp = front;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    pq.insert(30);
    pq.insert(10);
    pq.insert(50);
    pq.insert(20);
    pq.insert(40);

    cout << "Priority Queue: ";
    pq.display();
    pq.deleteHighest();
    cout << "After Deletion: ";
    pq.display();

    return 0;
}

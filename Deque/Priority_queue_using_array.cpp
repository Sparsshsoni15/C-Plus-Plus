#include <iostream>
using namespace std;

class PriorityQueue {
    int arr[10];
    int rear;

public:
    PriorityQueue() {
        rear = -1;
    }

    void insert(int x) {
        if (rear == 9) {
            cout << "Overflow\n";
            return;
        }

        arr[++rear] = x;
    }

    void deletePQ() {
        if (rear == -1) {
            cout << "Underflow\n";
            return;
        }

        int max = arr[0];
        int pos = 0;

        for (int i = 1; i <= rear; i++) {
            if (arr[i] > max) {
                max = arr[i];
                pos = i;
            }
        }

        cout << "Deleted Element = " << max << endl;

        arr[pos] = arr[rear];   
        rear--;
    }

    void display() {
        if (rear == -1) {
            cout << "Queue Empty\n";
            return;
        }

        for (int i = 0; i <= rear; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.insert(30);
    pq.insert(10);
    pq.insert(40);
    pq.insert(20);

    pq.display();

    pq.deletePQ();

    pq.display();

    return 0;
}
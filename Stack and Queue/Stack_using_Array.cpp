#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;

    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int value) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = value;

        cout << value << " pushed into stack" << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << arr[top] << " popped from stack" << endl;
        top--;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Top element = " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(5); 

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}

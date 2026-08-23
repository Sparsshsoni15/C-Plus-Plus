#include <iostream>
#include <vector>
using namespace std;

class Stack {
public:
    vector<int> arr;

    void push(int value) {
        arr.push_back(value);
        cout << value << " pushed into stack" << endl;
    }

    void pop() {
        if (arr.empty()) {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << arr.back() << " popped from stack" << endl;
        arr.pop_back();
    }

    void peek() {
        if (arr.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Top element = " << arr.back() << endl;
    }
    void display() {
        if (arr.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = arr.size() - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front Element: " << q.front() << endl;
    cout << "Rear Element: " << q.back() << endl;

    q.pop();

    cout << "After Pop:" << endl;
    cout << "Front Element: " << q.front() << endl;

    cout << "Queue Elements: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
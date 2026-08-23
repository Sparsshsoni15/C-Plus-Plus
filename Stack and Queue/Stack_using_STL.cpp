#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top Element: " << s.top() << endl;

    s.pop();

    cout << "After Pop, Top Element: " << s.top() << endl;

    cout << "Stack Elements: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
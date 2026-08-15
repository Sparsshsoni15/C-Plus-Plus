#include <iostream>>
using namespace std;
int main()
{
    // To print numbers from 1 to n using for loop

    int n;
    cout << "Enter a number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    { // initialization; condition; increment
        cout << i << endl;
    }
    return 0;
}
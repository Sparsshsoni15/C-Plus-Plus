#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cout << "Enter expression: ";
    cin >> s;

    vector<char> st;

    for (int i = 0; i < s.length(); i++) {

        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push_back(ch);
        }
        else {

            if (st.empty()) {
                cout << "Not Balanced";
                return 0;
            }

            if ((ch == ')' && st.back() == '(') ||
                (ch == '}' && st.back() == '{') ||
                (ch == ']' && st.back() == '[')) {

                st.pop_back();
            }
            else {
                cout << "Not Balanced";
                return 0;
            }
        }
    }

    if (st.empty())
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}
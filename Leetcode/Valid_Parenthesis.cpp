#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push_back(ch);
            } else {
                if (st.empty()) {
                    return false;
                }

                char top = st.back();

                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    st.pop_back();
                } else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string of parentheses: ";
    cin >> s;

    cout << boolalpha << sol.isValid(s) << endl;
    return 0;
}
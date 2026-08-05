#include <iostream>
#include <stack>
#include <vector>
#include <string>
//leetcode 150 evaluate reverse polish notation

class Solution
{
public:
    int evalRPN(std::vector<std::string>& tokens)
    {
        std::stack<int> s;

        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+")
            {
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                s.push(a + b);
            }
            else if (tokens[i] == "-")
            {
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                s.push(a - b);
            }
            else if (tokens[i] == "*")
            {
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                s.push(a * b);
            }
            else if (tokens[i] == "/")
            {
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                s.push(a / b);
            }
            else
            {
                s.push(std::stoi(tokens[i]));
            }
        }

        return s.top();
    }
};

int main()
{
    Solution sol;
    std::vector<std::string> tokens = {"2", "1", "+", "3", "*"};
    std::cout << sol.evalRPN(tokens) << std::endl;
    return 0;
}
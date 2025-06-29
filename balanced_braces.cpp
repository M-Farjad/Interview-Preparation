#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr) {
    stack<char> s;
    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') s.push(c);
        else {
            if (s.empty()) return false;
            char top = s.top();
            if ((c == ')' && top == '(') || (c == '}' && top == '{') || (c == ']' && top == '[')) 
                s.pop();
            else 
                return false;
        }
    }
    return s.empty();
}

int main() {
    cout << isBalanced("{[()]}") << endl;  // Output: 1 (true)
    cout << isBalanced("{[(])}") << endl;  // Output: 0 (false)
    return 0;
}

#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        int sz = q.size();
        while (sz-- > 1) {
            q.push(q.front());
            q.pop();
        }
    }
    
    void pop() {
        if (!q.empty()){
            q.pop();
        }
    }
    
    int top() {
        return q.empty() ? -1 : q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << s.top() << endl; // 20
    s.pop();
    cout << s.top() << endl; // 10
    return 0;
}

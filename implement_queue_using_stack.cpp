#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;
public:
    void enqueue(int x) {
        s1.push(x);
    }
    
    int dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        int val = s2.top();
        s2.pop();
        return val;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << endl; // 1
    cout << q.dequeue() << endl; // 2
    cout << q.dequeue() << endl; // 3
    return 0;
}

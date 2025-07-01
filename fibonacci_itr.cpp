#include <iostream>
using namespace std;

// Iterative Fibonacci
void fibonacciIterative(int n) {
    int a = 0, b = 1, next;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

// recursive Fibonacci
int fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n = 10;
    fibonacciIterative(n);  // Output: 0 1 1 2 3 5 8 13 21 34
    return 0;
}

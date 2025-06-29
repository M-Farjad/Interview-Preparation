#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;        // base case
    return a * power(a, b - 1);  // recursive case
}

int main() {
    cout << power(2, 5); // Output: 32
    return 0;
}

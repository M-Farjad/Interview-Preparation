#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    cout << ((num & 1) ? "Odd" : "Even") << endl;  // Bitwise operation
}

int main() {
    checkEvenOdd(5);  // Output: Odd
    checkEvenOdd(6);  // Output: Even
    return 0;
}

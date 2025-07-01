#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

// Function to check if a number is strong
bool isStrongNumber(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}


// Find all strong numbers in range
void findStrongNumbers(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isStrongNumber(i)) cout << i << " ";
    }
    cout << endl;
}

int main() {
    findStrongNumbers(1, 500);  // Output: 1 2 145
    return 0;
}

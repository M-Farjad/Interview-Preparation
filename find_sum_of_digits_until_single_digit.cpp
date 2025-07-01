#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
int main() {
    cout << sumOfDigits(9876) << endl;  // Output: 3
    return 0;
}

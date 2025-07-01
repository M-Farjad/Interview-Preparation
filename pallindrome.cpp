#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}


int main() {
    string str = "madam";
    cout << (isPalindrome(str) ? "Palindrome" : "Not a Palindrome") << endl;  // Output: Palindrome
    return 0;
}

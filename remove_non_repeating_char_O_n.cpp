#include <iostream>
#include <unordered_map>
using namespace std;

void firstNonRepeatingChar(string s) {
    unordered_map<char, int> freq;

    for (char c : s)
        freq[c]++;

    for (char c : s) {
        if (freq[c] == 1) {
            cout << "First non-repeating character: " << c << endl;
            return;
        }
    }

    cout << "No non-repeating character found." << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    firstNonRepeatingChar(input);
    return 0;
}

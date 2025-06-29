#include <iostream>
#include <unordered_map>
using namespace std;

bool canFormStr2FromStr1(string str1, string str2) {
    unordered_map<char, int> freq;

    for (char c : str1)
        freq[c]++;

    for (char c : str2) {
        if (freq[c] == 0)
            return false;
        freq[c]--;
    }

    return true;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (canFormStr2FromStr1(str1, str2))
        cout << "True – str2 can be formed from str1" << endl;
    else
        cout << "False – str2 cannot be formed from str1" << endl;

    return 0;
}

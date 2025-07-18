#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // Remove spaces (optional if not needed) and convert to lowercase
    str1 = str1.replaceAll(" ", "");
    str2 = str2.replaceAll(" ", "");
    if (str1.length() != str2.length()) {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    string str1 = "spar", str2 = "rasp";
    if (areAnagrams(str1, str2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void printMissingValues(const vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); i++) {
        for (int j = arr[i - 1] + 1; j < arr[i]; j++) {
            cout << j << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 4, 7, 10};
    printMissingValues(arr);  // Output: 3 5 6 8 9
    return 0;
}

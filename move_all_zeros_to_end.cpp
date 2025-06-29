#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& arr) {
    int index = 0;
    for (int num : arr) {
        if (num != 0) arr[index++] = num;
    }
    while (index < arr.size()) arr[index++] = 0;
}

int main() {
    vector<int> arr = {0, 1, 9, 8, 0, 2, 0, 3};
    moveZeros(arr);
    for (int num : arr) cout << num << " ";  // Output: 1 9 8 2 3 0 0 0
    return 0;
}

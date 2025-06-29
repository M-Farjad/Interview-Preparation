#include <iostream>
#include <vector>
using namespace std;

void shiftLargerToLeft(vector<int>& arr, int threshold) {
    vector<int> larger, smaller;
    for (int num : arr) {
        if (num > threshold) larger.push_back(num);
        else smaller.push_back(num);
    }
    arr = larger;
    arr.insert(arr.end(), smaller.begin(), smaller.end());
}

int main() {
    vector<int> arr = {3, 10, 1, 20, 5};
    shiftLargerToLeft(arr, 5);
    for (int num : arr) cout << num << " ";  // Output: 10 20 3 1 5
    return 0;
}

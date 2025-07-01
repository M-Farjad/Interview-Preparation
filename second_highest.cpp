#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondHighest(vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN;
    for (int num : arr) {
        if (num > first) {
            second = first;
            first = num;
        } else if (num > second && num < first) {
            second = num;
        }
    }
    return second;
}


int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "Second highest: " << findSecondHighest(arr) << endl;  // Output: 34
    return 0;
}

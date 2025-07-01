#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthSmallest(vector<int>& arr, int k) {
    priority_queue<int> maxHeap;  // max-heap

    for (int num : arr) {
        maxHeap.push(num);
        if (maxHeap.size() > k)
            maxHeap.pop();
    }
    return maxHeap.top();
}

int main() {
    vector<int> arr = {7, 4, 6, 3, 9, 1};
    int k = 4;
    cout << "K'th smallest element in the array is " << kthSmallest(arr, k) << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthLargest(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : arr) {
        minHeap.push(num);
        if (minHeap.size() > k){
            minHeap.pop();
        }
    }
    return minHeap.top();
}

int main() {
    vector<int> arr = {7, 4, 6, 3, 9, 1};
    int k = 4;
    cout <<"K\'th largest element in the array is " << kthLargest(arr, k)<<endl;
    return 0;
}

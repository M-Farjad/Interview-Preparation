#include <iostream>
#include <vector>
using namespace std;

void leftShift(vector<int>& arr) {
    if (arr.empty()) return;
    int first = arr[0];
    for (int i = 0; i < arr.size() - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    arr[arr.size() - 1] = first;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    leftShift(arr);

    cout << "Left shifted array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}


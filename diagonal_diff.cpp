#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int diagonalDiff(vector<vector<int>>& mat) {
    int n = mat.size();
    int leftSum = 0, rightSum = 0;
    
    for (int i = 0; i < n; ++i) {
        leftSum += mat[i][i];
        rightSum += mat[i][n - 1 - i];
    }
    
    return abs(leftSum - rightSum);
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << diagonalDiff(mat); // Output: 0
    return 0;
}

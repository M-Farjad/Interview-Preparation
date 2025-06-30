void kthLargestUtil(TreeNode* root, int k, int& count, int& result) {
    if (!root) return;
    kthLargestUtil(root->right, k, count, result);
    count++;
    if (count == k) {
        result = root->val;
        return;
    }
    kthLargestUtil(root->left, k, count, result);
}

int kthLargest(TreeNode* root, int k) {
    int count = 0;
    int result = -1;
    kthLargestUtil(root, k, count, result);
    return result;
}

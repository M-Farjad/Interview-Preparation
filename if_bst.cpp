bool isBSTUtil(TreeNode* node, long minVal, long maxVal) {
    if (!node) return true;
    if (node->val <= minVal || node->val >= maxVal)
        return false;
    return isBSTUtil(node->left, minVal, node->val) &&
           isBSTUtil(node->right, node->val, maxVal);
}

bool isBST(TreeNode* root) {
    return isBSTUtil(root, LONG_MIN, LONG_MAX);
}

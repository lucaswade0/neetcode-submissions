class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return helper(root, nullptr, nullptr);
    }
private:
    bool helper(TreeNode* node, TreeNode* lo, TreeNode* hi) {
        if (!node) return true;               // empty tree IS valid
        if (lo && node->val <= lo->val) return false;
        if (hi && node->val >= hi->val) return false;
        return helper(node->left, lo, node) &&
               helper(node->right, node, hi);
    }
};
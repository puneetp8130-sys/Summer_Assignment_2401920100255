class Solution {
public:
    bool isValid(TreeNode* root, long long low, long long high) {
        if (root == NULL) {
            return true;
        }

        if (root->val <= low || root->val >= high) {
            return false;
        }

        return isValid(root->left, low, root->val) &&
               isValid(root->right, root->val, high);
    }

    bool isValidBST(TreeNode* root) {
        return isValid(root, LLONG_MIN, LLONG_MAX);
    }
};
class Solution {
public:
    unordered_map<int, int> mp;
    int preIndex = 0;

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd) {
        if (inStart > inEnd)
            return NULL;

        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);

        int pos = mp[rootVal];

        root->left = build(preorder, inorder, inStart, pos - 1);

        root->right = build(preorder, inorder, pos + 1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        return build(preorder, inorder, 0, inorder.size() - 1);
    }
};
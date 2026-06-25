class Solution {
public:
    int maxPathSum(TreeNode* root) {
    int maxval = INT_MIN;
    maxsum(root,maxval);
    return maxval;    
    }

    int maxsum(TreeNode* root,int &maxval){
        if(root == NULL) return 0;

        int leftsum = max(0,maxsum(root->left,maxval));
        int rightsum = max(0,maxsum(root->right,maxval));
        maxval = max(maxval,root->val+leftsum+rightsum);

        return (root->val) + max(leftsum,rightsum);
    }
};
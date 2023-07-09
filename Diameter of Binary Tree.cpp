class Solution {
public:
    int ans = INT_MIN;
    int maxDepth(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        return max(maxDepth(root->right), maxDepth(root->left)) + 1;
    }
    void helper(TreeNode*root){
        if(root == nullptr){
            return;
        }
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        ans = max(ans, lh + rh);
        helper(root->left);
        helper(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return ans;
    }
};

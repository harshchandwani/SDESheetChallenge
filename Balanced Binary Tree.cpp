class Solution {
public:
    int maxDepth(TreeNode*root){
        if(!root){
            return 0;
        }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root || (root->left == NULL && root->right == NULL)){
            return true;
        }
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        if(abs(rh - lh) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }
        return false;
    }
};

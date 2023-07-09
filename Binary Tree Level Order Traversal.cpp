/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int>temp;
        vector<vector<int>>res;
        queue<TreeNode*>q;
        if(root == NULL){
            return res;
        }
        q.push(root);
        while(!q.empty()){
              int count = q.size();
            for(int i = 0; i < count; i++){
                TreeNode*element = q.front();
                q.pop();
                temp.push_back(element->val);
                if(element->left){
                    q.push(element->left);
                }
                if(element->right){
                    q.push(element->right);
                }

            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};


class Solution {
  public:
    vector <int> bottomView(Node *root) {
        //My idea is 
        //if we use BFS, we use a queue with Node* + int
        //we move to left, int - 1
        //we move to right, int + 1
        //on root  --> int = 0;
        // after all this we can select
        // node at each int
        
        vector<int>res;
        queue<pair<Node*, int>>q;
        map<int,int>map;
        if(root == NULL){
            return res;
        }
        
        q.push({root, 0});
        while(!q.empty()){
            auto&temp = q.front();
            q.pop();
            int index = temp.second;
            int val = temp.first->data;
            map[index] = val;
            
            if(temp.first->left){
                q.push({temp.first->left, index - 1});
            }
            if(temp.first->right){
                q.push({temp.first->right, index + 1});
            }
        }
        
        //now take out all the things out
        for(auto&it: map){
            res.push_back(it.second);
        }
        
        return res;
    }
};

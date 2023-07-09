
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
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
            if(map.find(index)==map.end()){
                map[index]=val;
            }
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
        //Your code here
    }

};

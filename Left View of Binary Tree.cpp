
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
    
    vector<int>res;
    if(root == NULL){
        return res;
    }
    //run a BFS
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node*temp = q.front();
            q.pop();
            
            if(i == 0){
                res.push_back(temp->data);
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            
        }
        
    }
    return res;
   // Your code here
}

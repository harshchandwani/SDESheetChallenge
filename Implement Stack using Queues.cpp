class MyStack {
    
public:
    queue<int>q1, q2;
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        
        q1.push(x);
        
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        
        
    }
    
    int pop() {
        int ans;
        
        if(!q1.empty()){
            ans = q1.front();
            q1.pop();
        }
        else{
            ans = -1;
        }
        return ans;
    }

   
    
    int top() {
        if(q1.empty())
            return -1;
        else
            return q1.front();
        
    }
    
    bool empty() {
        return q1.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

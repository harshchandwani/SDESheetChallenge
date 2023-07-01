class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>s;
        for(int i =0; i < n; i++){
            while(!s.empty() && nums[s.top()] >= nums[i]){
                s.pop();
            }
            if(!s.empty()){
                left[i] = s.top() + 1;
            }
            else{
                left[i] = 0;
            }
            s.push(i);
        }

        while(!s.empty()){
            s.pop();
        }

        for(int i = n - 1; i>=0; i--){
            while(!s.empty() && nums[s.top()] >= nums[i]){
                s.pop();
            }
            if(!s.empty()){
                right[i] = s.top() - 1;
            }
            else{
                right[i] = n - 1;
            }
            s.push(i);
        }



        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans, (nums[i] * (right[i] - left[i] + 1)));
        }
        return ans;
    }
};

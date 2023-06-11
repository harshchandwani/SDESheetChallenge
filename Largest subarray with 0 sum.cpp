class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {  
        unordered_map<int,int>presum;
        int max_len = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += A[i];
            if(sum == 0){
                max_len = i + 1;
            }
            
            if(presum.find(sum) != presum.end()){
                max_len = max(max_len,i - presum[sum]);
            }
            else{
                presum[sum] = i;
            }
        }
        return max_len;
        // Your code here
    }
};

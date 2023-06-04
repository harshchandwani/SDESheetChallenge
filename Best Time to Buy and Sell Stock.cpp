class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int buy = nums[0];
        for(int i = 0; i < n; i++){
            int temp = nums[i] - buy;
            ans = max(ans, temp);
            buy = min(buy, nums[i]);
        }
        return ans;
    }
};

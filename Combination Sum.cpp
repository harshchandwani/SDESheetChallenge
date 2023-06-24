class Solution {
public:
    void helper(vector<int>&nums, int target, int index, int size, vector<int>&temp, vector<vector<int>>&res){
        if(index == size){
            if(target == 0){
                res.push_back(temp);
            }
            return;
        }
        if(nums[index] <= target){
            temp.push_back(nums[index]);
            helper(nums, target - nums[index], index, size, temp, res);
            temp.pop_back();
        }
        helper(nums, target, index + 1, size, temp, res);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int>temp;
        vector<vector<int>>res;
        int index = 0;
        // sort(begin(candidates), end(candidates));
        helper(candidates, target, index, n, temp, res);
        // sort(res.begin(), res.end());
        return res;
    }
};

class Solution {
public:
    void solve(vector<int>&candidates, int target, vector<int>&temp, vector<vector<int>>&ans, const int order){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        else{
            for(int i = order; i < candidates.size(); i++){
                 if(candidates[i]>target) return;
                if(i&&candidates[i]==candidates[i-1]&&i>order) continue;
                temp.push_back(candidates[i]);
                solve(candidates, target- candidates[i], temp, ans, i + 1);
                temp.pop_back();
                // solve(candidates, target, temp, ans, i + 1);
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, temp, ans, 0);
        return ans;
    }
};

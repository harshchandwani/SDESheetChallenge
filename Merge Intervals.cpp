class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        sort(intervals.begin(), intervals.end());
        vector<int>temp = intervals[0];
        for(auto&it: intervals){
            if(it[0] <= temp[1]){
                temp[1] = max(it[1], temp[1]);
            }
            else{
                res.push_back(temp);
                // return ans;
                temp = it;
            }
            
        }
        res.push_back(temp);
        return res;
    }
};

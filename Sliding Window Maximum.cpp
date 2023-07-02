class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //take a set
        //we will move from 0 to k forfirst
        multiset<int>set;
        vector<int>res;
        for(int i = 0; i < k; i++){
            set.insert(nums[i]);
        }
        int maxi = *(set.rbegin());
        res.push_back(maxi);
        // int start = 0;
        for(int i = 1; i < nums.size() - k + 1; i++){
            auto it=set.find(nums[i-1]);
            set.erase(it);
            set.insert(nums[i + k - 1]);
            int maxi = *(set.rbegin());
            res.push_back(maxi);

        }
        return res;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>res;
        unordered_map<int,int>map;
        priority_queue<pair<int,int>>pq;
        for(int i = 0; i < n; i++){
            map[nums[i]]++;
        }
        for(auto&it: map){
            pq.push({it.second, it.first});
        }

        //ab we just have to take numbers from the pq
        for(int i = 0; i < k; i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};

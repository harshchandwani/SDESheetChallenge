class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //priority queue
        priority_queue<int>pq(begin(nums), end(nums));
        // k = k%nums.size();
        while(k > 1){
            pq.pop();
            k--;
        }
        //there can be an edge case
        //where k exceeds the array length

        return pq.top();
    }
};

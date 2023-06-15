class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i = 0; i <n - 2; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int left = i + 1;
            int right = n - 1;
            vector<int>temp;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum < 0){
                    left++;
                }
                else if(sum > 0){
                    right--;
                }
                else{
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    ans.push_back(temp);
                    while(left < right && nums[left] == nums[left + 1]){
                        left++;
                    }
                    while(right > left && nums[right] == nums[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                    temp.clear();

                }
            }
            // ans.push_back(temp);
        }
        return ans;
    }
};

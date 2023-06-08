class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i < n){
            if(nums[i] != i + 1){
                int correctPlace = nums[i] - 1;
                if(nums[correctPlace] != nums[i]){
                    swap(nums[correctPlace], nums[i]);
                }
                else{
                    return nums[i];
                }
            }
            else{
                i++;
            }
        }
        return -1;  
    }
};

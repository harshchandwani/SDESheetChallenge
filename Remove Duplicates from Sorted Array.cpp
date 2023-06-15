class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //ascending order
        //should have unique elements only
        //relative order should be maintained
        //return the number of unique elements in the array
        int n = nums.size();
        //1 1 2 -> if we have i - 1 == i then we will shift the i + 1 in i;
        //1 2

        int k = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i - 1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
        
    }
};

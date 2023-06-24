class Solution {
public:


    void helper(vector<int>&nums, int index, vector<int>&temp, vector<vector<int>>& res, int size){
        if(index >= size){
            res.push_back(temp);
            return;
        } 
        //we have 2 options
        //1st to insert the number in the vecctor
        temp.push_back(nums[index]);

        //call the function with the updated temp vector
        helper(nums, index + 1, temp, res, size);

        //now try the other option
        temp.pop_back();


        while(index + 1 < nums.size() && nums[index] == nums[index + 1]){
            index++;
        }
        helper(nums, index  + 1, temp, res, size);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //we need all the subset of the vector,
        //so, to start with we need a
        vector<vector<int>>res; // this will store the resultant error
        //and we also be requiring a temp vector
        vector<int>temp;
        //an index to traverse
        int index = 0;
        //will there be any cases like -> (2,2)
        //if not, we have to sort the array and then send to the function
        sort(nums.begin(), nums.end());
        //we need to have a different function to make all our functions work 
        helper(nums, index, temp, res, nums.size());
        //after the helper function will return the res vector, we need to ssort that too
        sort(res.begin(), res.end());
        return res;

    }
};

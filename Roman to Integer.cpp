class Solution {
public:
    int romanToInt(string nums) {
        unordered_map<char,int>map = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
        int res = map[nums.back()];
        // int res = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(map[nums[i]] < map[nums[i + 1]]){
                res -= map[nums[i]];
            }
            else{
                res += map(nums[i]);
            }
        }
        return res;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int slow = 0;
        int fast = 0;
        int max_len = 0;
        unordered_set<int>set;
        while(fast < n){
            if(set.find(s[fast]) != set.end()){
                set.erase(s[slow]);
                slow++;
            }
            else{
                set.insert(s[fast]);
                int curr_len = set.size();
                max_len = max(max_len, curr_len);
                fast++;
            }
            
        }
        return max_len;
    }
};

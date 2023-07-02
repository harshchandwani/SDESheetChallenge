class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(begin(strs), end(strs));
        int size = strs.size();
        int n = strs[0].size();
        string res = "";
        for(int i = 0; i < n; i++){
            if(strs[0][i] == strs[size - 1][i]){
                res += strs[0][i];
            }
            else{
                break;
            }
        }   
        return res;
    }
};

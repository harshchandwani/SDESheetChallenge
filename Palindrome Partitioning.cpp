class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>temp;
        if(s.size() == 0){
            return res;
        }
        solve(s, 0, res, temp);
        return res;
    }
    void solve(string &s, int i, vector<vector<string>>&res, vector<string>&temp){
        if(i == s.size()){
            res.push_back(temp);
            return;
        }
        else{
            for(int j = i; j < s.size(); j++){
                if(isPalindrome(s, i, j)){
                    temp.push_back(s.substr(i,  j - i + 1));
                    solve(s, j + 1, res, temp);
                    temp.pop_back();
                }
            }
        }
    }

    bool isPalindrome(string&s, int start, int end){
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }
};

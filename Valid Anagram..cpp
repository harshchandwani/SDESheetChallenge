class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>map1, map2;
        for(int i = 0; i < s.size(); i++){
            map1[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            map2[t[i]]++;
        }
        if(map1 == map2){
            return true;
        }
        else{
            return false;
        }
    }
};

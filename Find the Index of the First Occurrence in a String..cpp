class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int p = 0;
        while(m + p - 1 < n){
            if(haystack.substr(p,m) == needle){
                return p;
            }
            while(m + p++ - 1 < n && haystack[p] != needle[0]){};
        }
        return -1;
    }
};

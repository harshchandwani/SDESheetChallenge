class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int end = 1;
        //odd -> aba
        //even -> aa

        //for odd
        for(int i = 1; i < n; i++){
            int low = i - 1;
            int high = i;

            while(low >= 0 && high < n && s[low] == s[high]){
                if(high - low + 1 > end){
                    start = low;
                    end = high - low + 1;
                }
                low--;
                high++;
            }


            //case 2
            low = i - 1;
            high = i + 1;
            while(low >= 0 && high < n && s[low] == s[high]){
                if(high - low + 1 > end){
                    start = low;
                    end = high - low + 1;
                }
                low--;
                high++;
            }
        }

        string res;
        for(int i = start; i < end + start; i++){
            res.push_back(s[i]);
        }
        return res;
    }
};

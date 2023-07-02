class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<string>st;
        string word;
        for(int i=0;i<s.size();i++){
            string word = "";
            if(s[i] == ' '){
                
                continue;
            }
            while(s[i] != ' ' && i < s.size()){
                word += s[i];
                i++;
            }
            st.push(word);
        }
        while(!st.empty()){
            string word = st.top();
            
            ans += word;
            st.pop();
            if(!st.empty()){
                ans += " ";
            }
        }
        
        return ans;
    }
};

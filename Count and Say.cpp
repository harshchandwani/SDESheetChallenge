class Solution {
public:
    string countAndSay(int n) {
        vector<string> ans(n,"");
        ans.insert(ans.begin()+0,"1");
        string s;

        for(int i=1;i<n;i++){
            int j=0;
            s="";

            while(j<ans[i-1].length()){
                int k=j;
                int count=0;
               
                while(k<ans[i-1].length()){
                    if(ans[i-1][j]==ans[i-1][k]){
                    count++;
                    k++;
                    }
                    else{
                        break;
                    }
                   
                }
                string num = to_string(count);
                s += num;
                s += ans[i-1][j];
                j=k;
            }
            ans.insert(ans.begin()+i,s); 
            
        }
        return ans[n-1];
    }
};

class Solution {
public:
//    int helper(int i, int j, int n, int m, int count, vector<vector<int>>dp){
//         if(i==n-1 && j == m-1){
//             return 1;
//         }
//         if(i>=n || j >= m){
//             return 0;
//         }
//         if(dp[i][j] != -1){
//             return dp[i][j];
//         }
//         else{
//             return dp[i][j] = helper(i+1, j, n, m, count, dp) + helper(i, j+1, n, m, count,dp);
//         }
//     }
    int uniquePaths(int m, int n) {
        // int i = 0, j = 0;
        vector<vector<int>>dp(m + 1, vector<int>(n + 1, 1));
        // return helper(i, j, n, m, 0, dp);

        for(int i =1; i< m ;i++){
            for(int j = 1; j < n;j++){
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};

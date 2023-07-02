class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        //we willbe using BFS for this
        //{{r, c}, t}
        queue<pair<pair<int,int>,int>>q;
        int visited[n + 1][m + 1];
        int freshCount = 0;
        //mark the 2's as visited
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    visited[i][j] = 2;
                    q.push({{i, j}, 0});
                }
                else{
                    visited[i][j] = 0;
                }

                if(grid[i][j] == 1){
                    freshCount++;
                }
            }
        }
        int drow[] = {-1, 0, + 1, 0};
        int dcol[] = {0, 1, 0 ,-1};
        int count = 0;
        int tm = 0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm, t);

            q.pop();
            for(int i = 0;i < 4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if(ncol >= 0 && ncol < m && nrow >= 0 && nrow < n && visited[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
                    visited[nrow][ncol] = 2;
                    q.push({{nrow, ncol}, tm + 1});
                    count++;
                }
            }
        }
        if(count != freshCount){
            return -1;
        }
        return tm;
    }
};

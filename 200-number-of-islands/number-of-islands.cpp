class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<pair<int,int>>ans;
        // BFS lagata hu
        queue<pair<int,int>>q;
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<bool>>vst(row,vector<bool>(col,0));
        int count =0;
        int dr[4] = {-1,1,0,0};
        int dc[4] = {0,0,-1,1};
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                // if(grid[i][j]==1 && vst[i][j=='0'])
                // {
                //     vst[i][j]=1;
                //     continue;
                // }
                if(grid[i][j]=='1' && !vst[i][j])
                {
                    count++;
                    q.push(make_pair(i,j));
                    while(!q.empty())
                    {
                        int cr = q.front().first;
                        int cc= q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++)
                        {
                           int nr = cr +dr[k];
                           int nc = cc+dc[k];
                           if(nr>=0 && nr<row && nc>=0 and nc<col && grid[nr][nc]=='1' && vst[nr][nc]==false)
                           {
                                vst[nr][nc]=true;
                                q.push({nr,nc});
                           }
                        }
                    }

                }
            }
        }
        return count;
    }
};
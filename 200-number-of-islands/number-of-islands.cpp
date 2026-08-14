class Solution {
public:
int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        vector<vector<bool>>vst(r,vector<bool>(c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1' && vst[i][j]==false)
                    {
                        // DFS logic 
                        //vst[i][j]=true;
                        count++;
                        stack<pair<int,int>>nvst;
                        nvst.push({i,j});
                        while(!nvst.empty())
                            {
                               int cr=nvst.top().first;
                               int cc=nvst.top().second;
                               nvst.pop();
                               // push all its neighbours
                               if(vst[cr][cc])
                               {
                                    continue;
                               }
                                    
                               else 
                               {
                                    vst[cr][cc]=true;
                                    if(cr>=0 && cc-1>=0 && (vst[cr][cc-1]==false) && (grid[cr][cc-1]=='1'))
                                        nvst.push({cr,(cc-1)});
                                    if(cr>=0 && cc+1<c && (vst[cr][cc+1]==false) && (grid[cr][cc+1]=='1'))
                                        nvst.push({cr,(cc+1)});
                                    if(cr-1>=0 && cc>=0 && (vst[cr-1][cc]==false) && (grid[cr-1][cc]=='1'))
                                        nvst.push({(cr-1),cc});
                                    if(cr+1<r && cc>=0 && (vst[cr+1][cc]==false) && (grid[cr+1][cc]=='1'))
                                        nvst.push({(cr+1),cc});
                               }

                                
                            }
                    }
                    
                    

            }
        } 
            return count;
    }
};
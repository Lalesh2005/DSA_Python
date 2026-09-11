class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        vector<int>visited(n,0);
        vector<int>ans;
        queue<int>q;
        q.push(0);
        visited[0]=1;
        while(!q.empty())
        {
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for(int i=0;i<adj[node].size();i++)
            {
                if(!visited[adj[node][i]])
                {
                    visited[adj[node][i]]=1;
                    q.push(adj[node][i]);
                }
            }
        }
        return ans;
        
    }
};
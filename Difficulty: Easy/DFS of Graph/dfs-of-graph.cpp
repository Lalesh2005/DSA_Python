class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<int>visited(n,0);
        vector<int>ans;
        stack<int>st;
        st.push(0);
        while(!st.empty())
        {
            int curr=st.top();
            st.pop();
            if(visited[curr])
                continue;
            for(int i=adj[curr].size()-1;i>=0;i--)
            {

                st.push(adj[curr][i]);
            }
            visited[curr]=1;
            ans.push_back(curr);
        }
        return ans;
    }
};
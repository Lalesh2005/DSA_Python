class Solution {
  public:
    void solve(int n, int original, vector<int>& ans)

    {

        ans.push_back(n);

        if(n <= 0)

            return;

        solve(n - 5, original, ans);

        ans.push_back(n);

    }

    vector<int> pattern(int n)

    {

        vector<int> ans;

        solve(n, n, ans);

        return ans;

    }
};
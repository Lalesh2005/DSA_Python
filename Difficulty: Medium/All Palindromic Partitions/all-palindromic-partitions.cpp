class Solution {
  public:
    bool isPalin(string &s, int start, int end)
    {
        while(start < end)
        {
            if(s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    void helper(string &s,
                int idx,
                vector<string> &temp,
                vector<vector<string>> &ans)
    {
        if(idx == s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int j = idx; j < s.size(); j++)
        {
            if(isPalin(s, idx, j))
            {
                temp.push_back(s.substr(idx, j - idx + 1));
                helper(s, j + 1, temp, ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> palinParts(string s)
    {
        vector<vector<string>> ans;
        vector<string> temp;
        helper(s, 0, temp, ans);
        return ans;
    }
};
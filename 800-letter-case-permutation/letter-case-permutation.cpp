class Solution {
public:
    void letterCasePermutation_helper(string &s,int idx,vector<string>& ans)
    {
       if(idx == s.size())
        {
            ans.push_back(s);
            return;
        }
        if(isdigit(s[idx]))
        {
            letterCasePermutation_helper(s, idx + 1, ans);
            return;
        }
        // lowercase branch
        s[idx] = tolower(s[idx]);
        letterCasePermutation_helper(s, idx + 1, ans);
        // uppercase branch
        s[idx] = toupper(s[idx]);
        letterCasePermutation_helper(s, idx + 1, ans);

    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        letterCasePermutation_helper(s,0,ans);
        return ans;
    }
};
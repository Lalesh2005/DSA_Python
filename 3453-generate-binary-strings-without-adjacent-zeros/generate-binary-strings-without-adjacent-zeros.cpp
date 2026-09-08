class Solution {
public:
    void helper(int n, vector<string>& ans, string& s) {
        if (s.size() == n) {
            ans.push_back(s);
            return;
        }
        // choose
        s.push_back('1');
        helper(n, ans, s);
        s.pop_back();
        if (s.empty() || s.back() != '0') {
            s.push_back('0');
            helper(n, ans, s);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        string s = "";
        helper(n, ans, s);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
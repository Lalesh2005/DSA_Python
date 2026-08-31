class Solution {
  public:
    void binstr_helper(int n,vector<string>& ans,string &k)
    {
        if(k.size()==n)
        {
            ans.push_back(k);
            return;
        }
        // choose
        k.push_back('1');
        binstr_helper(n,ans,k);
        k.pop_back();
        k.push_back('0');
        binstr_helper(n,ans,k);
        k.pop_back();
    }
    vector<string> binstr(int n) {
            // code here
            vector<string>ans;
            string k="";
            binstr_helper(n,ans,k);
            sort(ans.begin(),ans.end());
            return ans;

        }
};
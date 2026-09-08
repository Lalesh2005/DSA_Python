class Solution {
  public:
  void helper(int n,vector<string>& ans,string& s)
  {
      if(s.size()==n)
      {
          ans.push_back(s);
          return;
      }
      // choose
      s.push_back('0');
      helper(n,ans,s);
      s.pop_back();
      s.push_back('1');
      helper(n,ans,s);
      s.pop_back();
      
      
  }
    vector<string> binstr(int n) {
        // code here
        vector<string>ans;
        string s = "";
        helper(n,ans,s);
        return ans;
    }
};
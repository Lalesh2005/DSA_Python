class Solution {
  public:
  bool check_isPalindrome(string& s,int left,int right)
   {
       if(left>right && s[left]!=s[right])
           return false;
       if(left>right && s[left]==s[right])
           return true;
       if(left==right)
           return true;
       if(s[left]!=s[right])
           return false;
       return check_isPalindrome(s,left+1,right-1);
   }
   bool isPalindrome(string& s) {
           // code here
           int left=0;
           int right=s.size()-1;
           return check_isPalindrome(s,left,right);

       }
};
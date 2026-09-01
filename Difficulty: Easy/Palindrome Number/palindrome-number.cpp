class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        string s = to_string(abs(n));
        int len = s.size();
        int left =0;
        int right = len-1;
        while(left<=right)
        {
            if(s[left]!=s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
class Solution {
public:
    int secondHighest(string s) {
                int n=s.size();
        int max=INT_MIN;
        int max2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]) && (s[i]-'0')>max)
            {
                max2=max;
                max = s[i]-'0';
            }
            else if(isdigit(s[i]) && (s[i]-'0')<max &&(s[i]-'0')>max2)
            {
                max2=s[i]-'0';
            }
        }
        if(max2!=INT_MIN)
            return max2;
        return -1;
    }
};
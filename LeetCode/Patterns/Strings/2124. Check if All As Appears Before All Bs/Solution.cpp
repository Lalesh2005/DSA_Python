class Solution {
public:
bool checkString(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s.substr(i,i+1)=="ba")
                return false;
        }
        return true;
    }
};
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag1 = false;
        if(isupper(word[0]))
            flag1=true;
        bool flag2 = false;
        if(word.size()>1 && isupper(word[1]))
            flag2 = true;
        bool flag3 = false;
        for(int i=2;i<word.size();i++)
        {
            if(islower(word[i]))
                continue;
            if(isupper(word[i]))
                flag3=true;
            if(flag2!=flag3)
                return false;
        }
        return true;
        

    }
};
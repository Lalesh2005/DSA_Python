class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        i=0
        word =[]
        while(i<=len(s)):
                a=s.find(" ",i,len(s))
                if(a==-1):
                                word.append(s[i:len(s)])
                                break
                word.append(s[i:a])
                i=a+1
        print(word)
        if(len(word)!=len(pattern)):
                return False
        mp ={}
        ms = {}
        for i in range(0,len(pattern)):
                if pattern[i] in mp and mp[pattern[i]]!=word[i]:
                        return False
                if word[i] in ms and ms[word[i]]!=pattern[i]:
                        return False
                else:
                        mp[pattern[i]]=word[i]
                        ms[word[i]]=pattern[i]
        return True

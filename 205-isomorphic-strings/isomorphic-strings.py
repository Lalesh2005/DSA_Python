class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if(len(s)!=len(t)):
            return False
        ms={}
        mt={}
        for i in range(len(s)):
            if s[i] in ms and ms[s[i]]!=t[i]:
                return False
            if t[i] in mt and mt[t[i]]!=s[i]:
                return False
            else:
                ms[s[i]]=t[i]
                mt[t[i]]=s[i]
        return True
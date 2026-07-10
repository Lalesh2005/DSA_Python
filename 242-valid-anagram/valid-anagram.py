class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if(len(s)!=len(t)):
                return False
        ms = {}
        for ch in s:
                if ch in ms:
                        ms[ch]+=1
                else:
                        ms[ch]=1
        for ch in t:
                if ch in ms and ms[ch]!=0:
                        ms[ch]-=1
                else:
                        return False
        return True
                
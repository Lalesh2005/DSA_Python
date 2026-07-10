class Solution(object):
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        freq = {}
        for ch in s:
            if ch in freq:
                freq[ch]+=1
            else:
                freq[ch]=1
        for ch in t:
            if ch in freq and freq[ch]!=0:
                freq[ch]-=1
            else:
                return ch
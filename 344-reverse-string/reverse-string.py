class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        t=[]
        for i in range(len(s)-1,-1,-1):
            t.append(s[i])
        for i in range(0,len(s)):
            s[i]=t[i]

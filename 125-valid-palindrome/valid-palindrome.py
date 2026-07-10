class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        k=""
        for ch in s:
            if(ch.isalpha()):
                k=k+ch.lower()
            elif(ch.isnumeric()):
                k=k+ch
            else:
                continue
        if(k==''.join(reversed(k))):
            return True
        return False
        
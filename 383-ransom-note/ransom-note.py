class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        mp = {}
        for ch in magazine:
            if ch in mp:
                mp[ch]+=1
            else:
                mp[ch]=1
        for ch in ransomNote:
            if ch in mp and mp[ch]!=0:
                mp[ch]-=1
            else:
                return False
        return True
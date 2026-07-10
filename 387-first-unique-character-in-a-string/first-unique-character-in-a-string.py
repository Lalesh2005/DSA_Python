class Solution(object):
    def firstUniqChar(self, s):
        mp = {}
        for ch in s:
            if ch in mp:
                mp[ch]+=1
            else:
                mp[ch]=1
        print(mp)
        min=float('inf')
        for ch in mp:
            if(mp[ch]==1 and min>s.find(ch)):
                min=s.find(ch)
        if(min==float('inf')):
            return -1
        return min
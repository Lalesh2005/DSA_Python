class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        freq = {}
        for ch in s:
            if ch in freq:
                freq[ch] += 1
            else:
                freq[ch] = 1
        word = ""
        freq = sorted(freq.items(), key=lambda x: x[1], reverse=True)
        for key, count in freq:   # <-- tuple unpacking
                word += key*count
        return word
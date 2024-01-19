class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        word = set()
        l = 0
        response = 0
        for r in range(len(s)):
            while s[r] in word:
                word.remove(s[l])
                l+=1
            word.add(s[r])
                
            response = max(response,r-l+1)
        return response

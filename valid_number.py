class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0: return False
        num=x
        reverse = 0
        while x > 0:
            mod = x %10
            reverse = reverse * 10 + mod
            x = x//10
        return num == reverse

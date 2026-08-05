from math import gcd

class Solution:
    def gcdSum(self, nums):
        n = len(nums)

        prefixGcd = [0] * n
        mx = 0

        for i, x in enumerate(nums):
            mx = max(mx, x)
            prefixGcd[i] = gcd(x, mx)

        prefixGcd.sort()

        ans = 0

        for i in range(n // 2):
            ans += gcd(prefixGcd[i], prefixGcd[n - 1 - i])

        return ans      
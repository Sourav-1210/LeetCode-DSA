class Solution:
    def shipWithinDays(self, weights, days):
        left = max(weights)
        right = sum(weights)

        while left < right:
            mid = (left + right) // 2

            need = 1
            curr = 0

            for w in weights:
                if curr + w > mid:
                    need += 1
                    curr = 0
                curr += w

            if need <= days:
                right = mid
            else:
                left = mid + 1

        return left     
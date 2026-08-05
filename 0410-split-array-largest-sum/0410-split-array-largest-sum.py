class Solution:
    def splitArray(self, nums, k):

        left = max(nums)
        right = sum(nums)

        while left < right:

            mid = (left + right) // 2

            if self.canSplit(nums, k, mid):
                right = mid
            else:
                left = mid + 1

        return left

    def canSplit(self, nums, k, maxSum):

        count = 1
        currSum = 0

        for num in nums:

            if currSum + num > maxSum:
                count += 1
                currSum = num
            else:
                currSum += num

        return count <= k     
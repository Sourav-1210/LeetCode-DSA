class Solution:
    def permute(self, nums):
        ans = []
        path = []
        used = [False] * len(nums)

        def backtrack():

            if len(path) == len(nums):
                ans.append(path[:])
                return

            for i in range(len(nums)):

                if used[i]:
                    continue

                path.append(nums[i])
                used[i] = True

                backtrack()

                path.pop()
                used[i] = False

        backtrack()
        return ans     
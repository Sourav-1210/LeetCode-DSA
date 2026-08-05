class Solution:
    def combinationSum(self, candidates, target):

        ans = []

        def backtrack(index, path, total):

            if total == target:
                ans.append(path[:])
                return

            if total > target or index == len(candidates):
                return

            # Take current element
            path.append(candidates[index])
            backtrack(index, path, total + candidates[index])

            # Backtrack
            path.pop()

            # Skip current element
            backtrack(index + 1, path, total)

        backtrack(0, [], 0)

        return ans
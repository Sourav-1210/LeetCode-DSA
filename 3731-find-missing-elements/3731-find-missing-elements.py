class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        ans = []
        maxi = max(nums)
        mini = min(nums)

        st = set(nums)

        for i in range(mini,maxi+1):
            if i not in st:
                ans.append(i)
        
        return ans
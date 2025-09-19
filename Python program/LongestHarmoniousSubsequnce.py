from collections import Counter

class Solution:
    def findLHS(self, nums):
        count = Counter(nums)           
        maxLength = 0
        for key in count:
            if key + 1 in count:        
                maxLength = max(maxLength, count[key] + count[key + 1])
        return maxLength
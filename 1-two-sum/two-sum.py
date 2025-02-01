class Solution:
    def twoSum(self, nums, target):
        seen = {}
        
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen:
                return [seen[complement], i]  # Return index of complement and current num
            seen[num] = i  # Store index of current num
        
        return []
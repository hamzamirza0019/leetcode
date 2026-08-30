from typing import List

class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1: 
            return 1
            
        min_elem = min(nums)
        max_elem = max(nums)
        
        max_ind = -1
        min_ind = -1
        
        for i in range(len(nums)):
            if nums[i] == min_elem:
                min_ind = i
            elif nums[i] == max_elem:
                max_ind = i
                
        idx1 = min(min_ind, max_ind)
        idx2 = max(min_ind, max_ind)
        
        opt1 = idx2 + 1
        
        opt2 = n - idx1
        
        opt3 = (idx1 + 1) + (n - idx2)
        
        return min(opt1, opt2, opt3)

class Solution(object):
    def count(self,nums,index,result,curr):
        if index == len(nums):
            result.append(curr[:])
            return
        # include
        curr.append(nums[index])
        self.count(nums,index+1,result,curr)
        # backtrack
        curr.pop()
        # element ko exclude karo
        self.count(nums, index + 1,result,curr)
        
        
    def subsets(self,nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result = []
        self.count(nums,0,result,[])
        return result 
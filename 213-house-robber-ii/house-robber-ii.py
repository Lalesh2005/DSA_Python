class Solution(object):
    def MaxRob(self,nums,n):
        if n==0:
                return nums[0]
        if n==1:
                return max(nums[0],nums[1])

        dp = [-1]*3
        dp[0]=nums[0]
        dp[1]=max(nums[0],nums[1])
        for i in range(2,n+1):
                dp[2]=max(
                        dp[1],
                        dp[0]+nums[i]
                )
                dp[0]=dp[1]
                dp[1]=dp[2]
        return dp[2]
            
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)-1
        if n==0:
                return nums[0]
        if n==1:
                return max(nums[0],nums[1])
        nums1=nums[:n]
        nums2=nums[1:n+1]
        return max(
                self.MaxRob(nums1,n-1),
                self.MaxRob(nums2,n-1)
        )       
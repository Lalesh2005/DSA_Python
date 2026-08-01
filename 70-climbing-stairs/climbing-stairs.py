class Solution(object):
    def helper(self,n,dp):
        if n<=1:
            return 1
        dp[0]=1
        dp[1]=1
        for i in range(2,n+1):
                dp[2]=dp[1]+dp[0]
                dp[0]=dp[1]
                dp[1]=dp[2]
        return dp[2]
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        dp = [-1]*3
        return self.helper(n,dp)

class Solution(object):
    def tribonacci(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n<=1:
            return n
        if n==2:
            return 1

        dp = [-1]*4
        dp[0]=0
        dp[1]=1
        dp[2]=1
        for i in range(3,n+1):
            dp[3]=dp[0]+dp[1]+dp[2]
            dp[0]=dp[1]
            dp[1]=dp[2]
            dp[2]=dp[3]

        return dp[3]
class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n<=1:
            return n
        dp = [-1]*3
        dp[0]=0
        dp[1]=1
        for i in range(2,n+1):
            dp[2]=dp[0]+dp[1]
            dp[0]=dp[1]
            dp[1]=dp[2]
        
        return dp[2]
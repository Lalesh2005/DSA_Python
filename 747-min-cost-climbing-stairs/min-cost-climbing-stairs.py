class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        n= len(cost)
        if n<=1:
                return 0
        dp = [-1]*3
        dp[0]=0
        dp[1]=0
        for i in range(2,n+1):
                dp[2]=min(
                        cost[i-1]+dp[1],
                        cost[i-2]+dp[0]
                )
                dp[0]=dp[1]
                dp[1]=dp[2]
        return dp[2]
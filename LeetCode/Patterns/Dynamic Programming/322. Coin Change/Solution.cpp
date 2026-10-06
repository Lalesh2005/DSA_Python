class Solution {
public:
    int coin_helper(vector<int>& coins,int amount,int n,vector<vector<int>>&dp)
    {
        if(amount==0)
            return 0;
        if(n==0 || amount<0)
            return 1e9;
        if(dp[n][amount]!=-1)
            return dp[n][amount];
        return dp[n][amount]=(min(coin_helper(coins,amount,n-1,dp),1+coin_helper(coins,amount-coins[n-1],n,dp)));
    }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int answer=coin_helper(coins,amount,n,dp);

        return answer>=1e9?-1:answer;

    }
};
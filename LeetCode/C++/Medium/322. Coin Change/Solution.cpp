class Solution {
public:
    int coin_helper(vector<int>& coins,int amount,int n,vector )
    {
        if(amount==0)
            return 0;
        if(n==0 || amount<0)
            return 1e9;
        return (min(coin_helper(coins,amount,n-1),1+coin_helper(coins,amount-coins[n-1],n)));
    }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        int answer=coin_helper(coins,amount,n);

        return answer>=1e9?-1:answer;

    }
};
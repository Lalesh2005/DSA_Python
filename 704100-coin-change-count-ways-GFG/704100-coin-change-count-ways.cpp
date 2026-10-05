class Solution {
	public:
	int coin_helper(int n, int amount, vector<int>& coins, vector<vector<int>> &dp)
	{
		if (amount == 0)
			return 1;
		if (n == 0 || amount<0)
			return 0;
		if (dp[n][amount]!= -1)
			return dp[n][amount];
		return dp[n][amount]=(coin_helper(n - 1, amount, coins,dp) + coin_helper(n, amount - coins[n - 1], coins,dp));
	}
	int count(vector<int>& coins, int sum) {
		// code here
		int n = coins.size();
		vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
		return coin_helper(n, sum, coins, dp);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
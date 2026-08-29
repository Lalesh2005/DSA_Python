class Solution {
	public:
	bool check(vector<int>&arr, int sum, int i)
	{
		if (i <= 0 && sum == 0)
			return true;
		if (i<0 && sum != 0)
			return false;
		if (sum == 0)
			return true;
		if (sum<0)
			return false;
		// choose.
		return (check(arr, sum - arr[i], i - 1) || check(arr, sum, i - 1));
		// do not choose.
	}
	bool isSubsetSum(vector<int>& arr, int sum) {
		int i = arr.size() - 1;
		return check(arr, sum, i);
		
	}
};

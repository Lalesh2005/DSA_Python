class Solution {
	public:
	void powerSet_helper(vector<string>& ans, string up, string p)
	{
		if (up.length() == 0)
			{
		
				ans.push_back(p);
	
			return;
		}
		char c = up[0];
		powerSet_helper(ans, up.substr(1), p + c);
		powerSet_helper(ans, up.substr(1), p);
		
	}
	vector<string> powerSet(string &s) {
		// Code here
		vector<string>ans;
		int i = s.size() - 1;
		powerSet_helper(ans, s, "");
		sort(ans.begin(), ans.end());
		return ans;
		
	}
};

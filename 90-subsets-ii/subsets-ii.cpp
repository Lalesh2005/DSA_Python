class Solution {
public:
    void helper(vector<int>& nums,
                int idx,
                vector<int>& temp,
                vector<vector<int>>& ans)
    {
        ans.push_back(temp);
        for (int i = idx; i < nums.size(); i++)
        {
            // Skip duplicates
            if (i > idx && nums[i] == nums[i - 1])
                continue;
            temp.push_back(nums[i]);
            helper(nums, i + 1, temp, ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        helper(nums, 0, temp, ans);
        return ans;
    }
};
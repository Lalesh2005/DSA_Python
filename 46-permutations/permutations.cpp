class Solution {
public:
    void permute_helper(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,vector<bool>& used){
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        // choose
        for(int i=0;i<nums.size();i++)
        {
            if(used[i])
                continue;
            temp.push_back(nums[i]);
            used[i]=true;
            permute_helper(nums,ans,temp,used);
            temp.pop_back();
            used[i]=false;
        }


    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>used(nums.size(),0);
        permute_helper(nums,ans,temp,used);
        return ans;

    }
};
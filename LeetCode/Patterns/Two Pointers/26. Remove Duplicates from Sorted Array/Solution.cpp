class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        for(int k=0;k<=nums.size();k++)
        {
            if(nums[i]==nums[j])
                j++;
            else
            {
                nums[i+1]=nums[j];
                i++;
                j++;
            }
        }
        return i;
    }
};
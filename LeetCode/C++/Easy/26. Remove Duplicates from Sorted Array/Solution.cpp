class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>result;
    int n=nums.size(); 
    int frquency=0,elem=nums[0],index=0;
    nums[index]=elem;
    result.push_back(nums[0]);
    for(int k=1;k<n;k++)
    {
        if(nums[k]==elem)
        {
            frquency++;
        }
        else if(nums[k]!=elem)
        {
            index++;
            elem=nums[k];
            //nums[index]=nums[k];
            result.push_back(nums[k]);
            frquency=1;
        }
    }
    //  for(int l=0;l<index+1;l++)
    // {
    //    cout<<" "<<nums[l];
    // }
     for (int i = 0; i < result.size(); i++) {
            nums[i] = result[i];
        }

        return result.size();

    }
};
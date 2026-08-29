class Solution {
  public:
    bool check_sorted(vector<int>&arr,int i)
    {
        if(i==0)
            return true;
        if(arr[i]<arr[i-1])
            return false;
        return check_sorted(arr,i-1);


    }
    bool isSorted(vector<int>& arr) {
            // code here
            return check_sorted(arr,arr.size()-1);

        }
};
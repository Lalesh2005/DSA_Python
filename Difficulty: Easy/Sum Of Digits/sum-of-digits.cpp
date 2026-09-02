class Solution {
  public:
    void sum_helper(int& n,int& sum)
    {
        if(n<=0)
            return;
        sum = sum +(n%10);
        n=n/10;
        sum_helper(n,sum);
    }
    int sumOfDigits(int n) {
        // code here
        int sum =0;
        sum_helper(n,sum);
        return sum;
    }
};
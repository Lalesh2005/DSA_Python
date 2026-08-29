class Solution {
  public:
int digitalSum(int n)

     {

         if(n == 0)

             return 0;

         return n % 10 + digitalSum(n / 10);

     }

     int digitalRoot(int n)

     {

         if(n < 10)

             return n;

         return digitalRoot(digitalSum(n)); }
};
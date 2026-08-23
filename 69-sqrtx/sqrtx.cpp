class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        if(x==0)
        {
            return 0;
        }
        int mid = low+(high-low)/2;
        int res=1;
        while(low<=high)
        {
             mid = low+(high-low)/2;
             long long sq = 1LL * mid * mid;
             if(sq > x)
             {
                 high=mid-1;
               
             }
             else 
             {
                res=mid;
                low=mid+1;
             }
        }
        return res;
    }
};
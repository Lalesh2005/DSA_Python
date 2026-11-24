class Solution {
public:
    long long gcd(long long a, long long b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    long long lcm(long long a, long long b) {
        long long LCM = (a / gcd(a, b)) * b;
        return LCM;
    }

    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long product = 1;
            long long GCD = 0;
            long long LCM = 1;

            for (int j = i; j < n; j++) {
                product = product * nums[j];

                GCD = gcd(GCD, nums[j]);

                LCM = lcm(LCM, nums[j]);

                if (product == LCM * GCD) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};
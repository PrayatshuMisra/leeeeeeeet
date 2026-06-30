class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor)
            return 1;
        bool sign = true;
        if (dividend >= 0 && divisor < 0)
            sign = false;
        else if (dividend <= 0 && divisor > 0)
            sign = false;
        long long n = llabs((long long)dividend);
        long long d = llabs((long long)divisor);
        long ans = 0;
        while (n >= d) {
            int count = 0;
            while (n >= (d << (count + 1))) {
                count += 1;
            }
            ans += (1LL << count);
            n -= (d << count);
        }
        if (ans == (1LL << 31) && sign == true)
            return INT_MAX;
        if (ans == (1LL << 31) && sign == false)
            return INT_MIN;
        return sign ? ans : -ans;
    }
};
class Solution {
public:
    bool isHappy(int n) {
        int count = 0; 
        while (count < 100) { 
            long sum = 0;
            while (n > 0) {
                int last = n % 10;
                sum += last * last;
                n /= 10;
            }
            if (sum == 1) return true;
            n = sum;
            count++;
        }
        return false;
    }
};

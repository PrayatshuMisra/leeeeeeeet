class Solution {
public:
    bool check(vector<int>& nums) {
    int a = nums.size();
    int rot = 0;
    
    for (int i = 0; i < a; i++) {
        if (nums[i] > nums[(i + 1) % a]) {
            rot++;
        }
        if (rot > 1)
        return false;
    }
    return true;
    }
};
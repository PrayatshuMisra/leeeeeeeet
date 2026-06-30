class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0, actual_sum=0, missing_num=0;
        int length=nums.size();
        actual_sum= (length*(length+1))/2;
        for(int i=0; i<length; i++){
            sum +=nums[i];
        }
        missing_num= actual_sum-sum;
        return missing_num;
    }
};
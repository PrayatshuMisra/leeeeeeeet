class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int fin=0;
        for(int x:nums){
            fin=fin^x;
        }
        return fin;
    }
};
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        for (int sub = 0; sub < (1 << n); sub++) {
            vector<int> list;
            for (int i = 0; i < n; i++) {
                if(sub & (1<<i)){
                    list.push_back(nums[i]);
                }
            }
            ans.push_back(list);
        }
        return ans;
    }
};
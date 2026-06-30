class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if (ans.find(comp) !=
                ans.end()) { // to find if comp exists in hash map
                return { ans[comp], i };
            } else {
                ans[nums[i]] = i;
            }
        }
        return {};
    }
};
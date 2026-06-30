class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> st;
        for (int sub = 0; sub < (1 << n); sub++) {
            vector<int> list;
            for (int i = 0; i < n; i++) {
                if (sub & (1 << i)) {
                    list.push_back(nums[i]);
                }
            }
            st.insert(list);
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};
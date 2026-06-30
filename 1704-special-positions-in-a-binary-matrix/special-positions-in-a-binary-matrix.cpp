class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<int> row_count(rows, 0);
        vector<int> col_count(cols, 0);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 1) {
                    row_count[i]++;
                    col_count[j]++;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 1 && row_count[i] == 1 && col_count[j] == 1) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
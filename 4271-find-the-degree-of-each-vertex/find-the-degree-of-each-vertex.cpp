class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix.size();
        vector<int> sum(rows,0);
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                sum[j]=sum[j]+matrix[i][j];
            }
        }
        return sum;
    }
};
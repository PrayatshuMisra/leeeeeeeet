class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr_pos=0;
        int max_pos=0;
        for(int i=0; i<gain.size(); i++){
            curr_pos = curr_pos+gain[i];
            max_pos = max(curr_pos,max_pos);
        }
        return max_pos;
    }
};
class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> low, up;
        for (char c : word) {
            if (islower(c)) {
                low.insert(c);
            } else {
                up.insert(c);
            }
        }
        int cnt = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            if (low.count(c) && up.count((toupper(c)))) {
                cnt++;
            }
        }
        return cnt;
    }
};
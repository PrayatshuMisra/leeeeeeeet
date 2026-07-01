class Solution {
public:
    bool detectCapitalUse(string word) {
        int up = 0;
        for (int i = 0; i < word.length(); i++) {
            if (isupper(word[i])) {
                up++;
            }
        }
        if (up == word.length() || up == 0 || (up == 1 && isupper(word[0]))) {
            return true;
        } else {
            return false;
        }
    }
};
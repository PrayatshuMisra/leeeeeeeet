class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for (char c : s) {
            if (isalnum(c)) clean += tolower(c);
        }
        return helper(0, clean);
    }

private:
    bool helper(int i, const string &s) {
        int n = s.length();
        if (i >= n / 2) return true;
        if (s[i] != s[n - i - 1]) return false;
        return helper(i + 1, s);
    }
};
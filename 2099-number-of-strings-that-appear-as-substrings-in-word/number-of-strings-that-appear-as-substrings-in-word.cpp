class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        // find returns the number of times substring appears
        // s="hello" and s.find('ll') = 2 (ll starts at index 2)
        // string::npos is not found and gives random value
        // #include <iostream>
        // using namespace std;
        // int main() {
        //     string s = "hello";
        //     cout << s.find("abc"); output is garbage num and is string::npos

        int count = 0;
        for (string& pattern : patterns) {
            if (word.find(pattern) != string::npos) {
                count++;
            }
        }
        return count;
    }
};
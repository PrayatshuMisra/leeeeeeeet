class Solution {
public:
    bool isPalindrome(int x) {
        long revnum=0;
        int original=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            int last=x% 10;
            x /=10;
            revnum = (revnum*10)+last;
        }
        return original==revnum;
    }
};
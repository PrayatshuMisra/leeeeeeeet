class Solution {
public:
    int findComplement(int num) {
       int shift_num=1;
       while(shift_num < num){
        shift_num = (shift_num<<1) | 1;
       }
       return num^shift_num;
    }
};
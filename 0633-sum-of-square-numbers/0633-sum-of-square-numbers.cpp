class Solution {
public:
    bool judgeSquareSum(int c) {
        long long start =0;
        long long end = sqrt(c);
        while(start <= end){
            if(start * start + end * end == c){
                return true;
            }
            else if(start * start + end * end < c){
                start++;
            }
            else{
                end--;
            }
        }
        return false;
    }
};
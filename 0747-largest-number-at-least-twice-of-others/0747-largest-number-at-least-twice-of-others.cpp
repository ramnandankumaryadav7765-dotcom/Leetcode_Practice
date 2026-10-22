class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maximum = nums[0];
        int pos = 0;
        for(int i = 1 ; i<nums.size() ; i++){
            if(nums[i] > maximum){
                maximum = nums[i];
                pos = i;
            }
        }

        int i = 0;
        while(i<nums.size()){
            if(i != pos){
                if(maximum < nums[i]*2){
                    return -1;
                }
            }
            i++;
        }
        return pos;
    }
};
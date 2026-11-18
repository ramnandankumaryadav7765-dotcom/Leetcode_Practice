class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> ans(nums.size());

        int suffix = 0;
        for(int i = nums.size()-1 ; i >= 0 ; i--){
            ans[i] = suffix;
            suffix = suffix + nums[i];
        }

        int prefix = 0;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            ans[i] = ans[i] - prefix;
            if(ans[i] == 0){
                return i;
            }
            prefix = prefix + nums[i];
        }
        
        return -1;
    }
};
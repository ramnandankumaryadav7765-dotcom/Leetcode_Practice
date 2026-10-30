class Solution {
public:
    int findMin(vector<int>& nums) {
        int minimum = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            minimum = min(minimum , nums[i]);
        }

        return minimum;
    }
};
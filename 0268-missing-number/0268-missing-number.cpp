class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNum = nums.size();
        for(int i = 0 ; i<nums.size() ; i++){
            missingNum = missingNum^i^nums[i];
        }
        return missingNum;
    }
};
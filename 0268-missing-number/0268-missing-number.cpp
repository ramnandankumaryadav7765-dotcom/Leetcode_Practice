class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNum = nums.size();
    
        sort(nums.begin() , nums.end());
        for(int i =0 ; i<nums.size() ; i++){
            if(i != nums[i]){
                missingNum = i;
                break;
            }
        }
        return missingNum;
    }
};
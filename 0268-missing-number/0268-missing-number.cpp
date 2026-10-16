class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long total = n * (n+1)/2;
        long long currSum = 0;
        for(int i =0 ; i<n ; i++){
            currSum+=nums[i];
        }
        long long missingNum = total-currSum;

        return missingNum;
    }
};
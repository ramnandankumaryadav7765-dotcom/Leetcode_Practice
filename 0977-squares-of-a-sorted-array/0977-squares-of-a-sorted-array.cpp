class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int start = 0;
        int end = n-1;
        int pointer = n-1;

        while(start <= end){
            if(nums[start]*nums[start] >= nums[end]*nums[end]){
                ans[pointer] = nums[start]*nums[start];
                start++;
                pointer--;
            }
            else{
                ans[pointer] = nums[end]*nums[end];
                end--;
                pointer--;
            }
        }
        return ans;
    }
};
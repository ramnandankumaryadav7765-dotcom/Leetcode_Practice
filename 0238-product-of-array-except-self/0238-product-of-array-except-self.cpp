class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);

        // Prefix products
        int leftProduct = 1;
        for (int i = 0; i < nums.size(); i++) {
           ans[i] = leftProduct;
           leftProduct = leftProduct * nums[i];
        }

        //Suffix products
        int rightProduct = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            ans[i] = ans[i] * rightProduct;
            rightProduct = rightProduct * nums[i];
        }

        return ans;
    }
};
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int>ans;
//         for(int i = 0 ; i< nums.size() ; i++){
//             long long result = 1;
//             for(int j = 0 ; j< nums.size() ; j++){
//                 if(i == j){
//                     continue;
//                 }
//                 result*=nums[j];
//                 if(nums[j] == 0){
//                     result = 0;
//                     break;
//                 }
//             }
//             ans.push_back(result);
//         }

//         return ans;
//     }
// };




class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        int prefix = 1;

        // Calculate prefix products
        for(int i = 0; i < n; i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;

        // Multiply by suffix products
        for(int i = n - 1; i >= 0; i--){
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};
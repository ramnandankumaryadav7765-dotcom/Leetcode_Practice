// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int>ans(nums.size());
//         int start = 0;
//         int end = nums.size()-1;
//         for(int i = 0 ; i<nums.size() ; i++){
//             if(nums[i] == 0){
//                 ans[end] = nums[i];
//                 end--;
//             }
//             else{
//                 ans[start] = nums[i];
//                 start++;
//             }
//         }
        
//         // for(int i = 0 ; i< nums.size() ; i++){
//         //     nums[i] = ans[i];
//         // }
//         nums = ans;
//     }
// };



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        for (int fast = 0 ; fast < nums.size() ; fast++){
            if(nums[fast] != 0){
                swap(nums[slow] , nums[fast]);
                slow++;
            }  
        }
    }
};
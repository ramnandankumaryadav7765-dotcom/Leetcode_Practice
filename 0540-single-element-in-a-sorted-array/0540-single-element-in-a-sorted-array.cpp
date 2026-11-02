class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        while(start < end) {
            int mid = start + (end - start) / 2;

            // Make mid even
            if(mid % 2 == 1) {
                mid--;
            }

            if(nums[mid] == nums[mid + 1]) {
                start = mid + 2;
            }
            else {
                end = end = mid;;
            }
        }

        return nums[start];
    }
};




// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         unordered_map<int , int>mp;
//         for(int x : nums){
//             mp[x]++;
//         }
        
//         for(auto x : mp){
//             if(x.second == 1){
//                 return x.first;
//             }
//         }
//         return -1;
//     }
// };




// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         for(int i = 0 ; i< nums.size() ; i++){
//             int count = 0;
//             for(int j = 0 ; j < nums.size() ; j++){
//                 if(nums[i] == nums[j]){
//                     count++;
//                 }
//             }
//             if(count == 1){
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int , int>mp;
        for(int x : nums){
            mp[x]++;
        }
        
        for(auto x : mp){
            if(x.second == 1){
                return x.first;
            }
        }
        return -1;
    }
};




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
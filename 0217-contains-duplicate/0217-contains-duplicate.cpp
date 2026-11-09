// TC : O(N^2)
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         for(int i = 0 ; i < nums.size() ; i++){
//             for(int j = i+1 ; j < nums.size() ; j++){
//                 if(nums[i] == nums[j]){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };


// TC : O(NlogN)
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
        
//         sort(nums.begin() , nums.end());
//         for(int i = 0 ; i < nums.size()-1 ; i++){
//             if(nums[i] == nums[i+1]){
//                 return true;
//             }
//         }
//         return false;
//     }
// };



// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int , int> mp;
//         for(int i = 0 ; i<nums.size() ; i++){
//             mp[nums[i]]++;
//         }
//         for(auto x : mp){
//             if(x.second > 1){
//                 return true;
//             }
//         }
//         return false;
//     }
// };



// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int , int> mp;
//         for(int i = 0 ; i<nums.size() ; i++){
//             mp[nums[i]]++;
//             if(mp[nums[i]] > 1){
//                 return true;
//             }
//         }
//         return false;
//     }
// };


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0 ; i<nums.size() ; i++){
            st.insert(nums[i]);
        }
        
        return nums.size() != st.size();
    }
};
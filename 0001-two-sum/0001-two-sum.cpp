class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int firIdx = -1;
        int secIdx = -1;
        for(int i=0 ; i<nums.size()-1 ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums[i]+nums[j] == target){
                    firIdx=i;
                    secIdx=j;
                    break;
                }
            }
        }
        return {firIdx , secIdx};
    }
};



// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int , int>mp;
//         for(int i=0 ; i<nums.size() ; i++){
//             int need=target-nums[i];
//             if(mp.find(need) != mp.end()){
//                 return {mp[need] , i};
//             }
//             mp[nums[i]]=i;
//         }
//         return {};
//     }
// };
// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         vector<int>ans;
        
//         sort(nums.begin() , nums.end());
//         for(int i = 0 ; i < nums.size() ; i++){
//             if(nums[i] == target){
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
// };



class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        int count = 0;
        int firIdx = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] < target){
                firIdx++;
            }
            if(nums[i] == target){
                count++;
            }
        }
        vector<int> ans;
        for(int i = 0 ; i < count ; i++){
            ans.push_back(firIdx);
            firIdx++;
        }

        return ans;
    }
};
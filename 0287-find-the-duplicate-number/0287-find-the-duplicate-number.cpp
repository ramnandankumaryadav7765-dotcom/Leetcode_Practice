// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin() , nums.end());
//         for(int i = 1 ; i < nums.size() ; i++){
//             if(nums[i] == nums[i-1]){
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };




class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(int x : nums){
            if(st.find(x) != st.end()){
                return x;
            }
            st.insert(x);
        }
        return -1;
    }
};
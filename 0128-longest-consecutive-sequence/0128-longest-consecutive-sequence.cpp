// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.empty()) return 0;
        
//         sort(nums.begin(), nums.end());
//         int maxCount = 1;
//         int count = 1;
        
//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] == nums[i - 1]) {
//                 continue;
//             }
//             if (nums[i] == nums[i - 1] + 1) {
//                 count++;
//                 maxCount = max(maxCount, count);
//             } else {
//                 count = 1;
//             }
//         }
//         return maxCount;
//     }
// };







class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int x : nums){
            st.insert(x);
        }

        int maxCount = 0;
        for(int x : st){
            if(st.find(x - 1) == st.end()){

                int current = x;
                int count = 1;

                while(st.find(current + 1) != st.end()){
                    current++;
                    count++;
                }

                maxCount = max(maxCount, count);
            }
        }

        return maxCount;
    }
};
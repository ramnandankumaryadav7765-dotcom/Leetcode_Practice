class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        while(left <= right) {

            // Check from the left side
            if((left == 0 || nums[left] > nums[left-1]) &&
               (left == nums.size()-1 || nums[left] > nums[left+1])) {
                return left;
            }

            // Check from the right side
            if((right == 0 || nums[right] > nums[right-1]) &&
               (right == nums.size()-1 || nums[right] > nums[right+1])) {
                return right;
            }

            left++;
            right--;
        }

        return -1;
    }
};





// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {

//         int n = nums.size();

//         for(int i = 0; i < n; i++) {

//             bool left = (i == 0 || nums[i] > nums[i-1]);

//             bool right = (i == n-1 || nums[i] > nums[i+1]);

//             if(left && right) {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };
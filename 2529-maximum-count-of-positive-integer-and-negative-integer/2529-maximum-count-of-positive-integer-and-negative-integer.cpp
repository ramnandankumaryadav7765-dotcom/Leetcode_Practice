// class Solution {
// public:
//     int maximumCount(vector<int>& nums) {
//         int posCount = 0;
//         int negCount = 0;

//         for(int i = 0 ; i<nums.size() ; i++){
//             if(nums[i] < 0){
//                 negCount++;
//             }
//             else if(nums[i] > 0){
//                 posCount++;
//             }
//             else{
//                 continue;
//             }
//         }
//         int ans = max(posCount , negCount);

//         return ans;
//     }
// };




class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        int firstNonNegative = nums.size();
        while(left <= right) {

            int mid = left + (right - left) / 2;

            if(nums[mid] >= 0) {
                firstNonNegative = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        left = 0;
        right = nums.size() - 1;

        int firstPositive = nums.size();

        while(left <= right) {

            int mid = left + (right - left) / 2;

            if(nums[mid] > 0) {
                firstPositive = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        int negCount = firstNonNegative;
        int posCount = nums.size() - firstPositive;

        return max(negCount, posCount);
    }
};


// We just need to find two positions:
// - First position where the number is greater than or equal to zero.
// - First position where the number is greater than zero.

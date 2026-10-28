class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lstart = 0;
        int lend = nums.size()-1;
        int ans1 = -1;

        while(lstart <= lend){
            int mid = lstart + (lend - lstart)/2;

            if(nums[mid] == target){
                ans1 = mid;
                lend = mid - 1;
            }
            else if(nums[mid] > target){
                lend = mid-1;
            }
            else{
                lstart = mid + 1;
            }
        }

        int rstart = 0;
        int rend = nums.size()-1;
        int ans2 = -1;

        while(rstart <= rend){
            int mid = rstart + (rend - rstart)/2;
            if(nums[mid] == target){
                ans2 = mid;
                rstart = mid+1;
            }
            else if(nums[mid] > target){
                rend = mid - 1;
            }
            else{
                rstart = mid + 1;
            }
        }

        return {ans1 , ans2};

    }
};












// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int ans1 = -1;
//         int ans2 = -1;
//         for(int i = 0 ; i< nums.size() ; i++){
//             if(nums[i] == target){
//                 ans1 = i;
//                 break;
//             }
//         }

//         for(int i = nums.size()-1 ; i>=0 ; i--){
//             if(nums[i] == target){
//                 ans2 = i;
//                 break;
//             }
//         }

//         return {ans1 , ans2};
//     }
// };
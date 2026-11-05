class Solution {
public:
    int trap(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;

        int water = 0;

        while(left < right) {

            leftMax = max(leftMax, height[left]);
            rightMax = max(rightMax, height[right]);

            if(leftMax < rightMax) {

                water += leftMax - height[left];
                left++;

            }
            else {

                water += rightMax - height[right];
                right--;

            }
        }

        return water;
    }
};




// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int water = 0;

//     for(int i = 0; i < height.size(); i++) {

//         int leftMax = 0;
//         int rightMax = 0;

//         for(int j = 0; j <= i; j++) {
//             leftMax = max(leftMax, height[j]);
//         }

//         for(int j = i; j < height.size(); j++) {
//             rightMax = max(rightMax, height[j]);
//         }

//         water += min(leftMax, rightMax) - height[i];
//     }
//     return water;
//     }
// };
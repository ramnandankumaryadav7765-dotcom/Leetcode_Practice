class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int maxWater = 0;

        while (start < end) {
            int hi = min(height[start], height[end]);
            int br = end - start;

            maxWater = max(maxWater, hi * br);

            if (height[start] < height[end]) {
                start++;
            }
            else {
                end--;
            }
        }

        return maxWater;
    }
};
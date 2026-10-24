class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int start =0;
        int end = height.size()-1;

        while(start < end){
            int minHeight = min(height[start] , height[end]);
            int width = end-start;

            maxArea = max(maxArea , minHeight * width);
            
            if(height[start] >= height[end]){
                end--;
            }
            else{
                start++;
            }
        }

        return maxArea;
    }
};
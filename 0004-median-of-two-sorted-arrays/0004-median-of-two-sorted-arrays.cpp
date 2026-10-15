class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        int i = n;
        while(i>=n && i<n+m){
            nums1.push_back(nums2[i-n]);
            i++;
        }

        sort(nums1.begin() , nums1.end());
        int x = nums1.size();

        if (x % 2 == 0) {
            return ((nums1[x / 2]) + nums1[(x / 2) - 1]) / 2.0;
        }

        return nums1[x / 2];
    }
};
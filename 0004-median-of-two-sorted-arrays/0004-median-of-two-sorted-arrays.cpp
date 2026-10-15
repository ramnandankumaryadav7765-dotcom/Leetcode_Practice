class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int n = nums1.size();
        int m = nums2.size();

        int i = 0;
        while (i < n) {
            arr.push_back(nums1[i]);
            i++;
        }

        int j = n;
        while (j >= n && j < n + m) {
            arr.push_back(nums2[j - n]);
            j++;
        }

        sort(arr.begin(), arr.end());

        int x = arr.size();

        if (x % 2 == 0) {
            return ((arr[x / 2]) + arr[(x / 2) - 1]) / 2.0;
        }

        return arr[x / 2];
    }
};
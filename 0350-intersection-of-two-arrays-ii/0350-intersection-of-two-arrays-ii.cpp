class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> nums1MP;

        for(int x : nums1){
            nums1MP[x]++;
        }

        vector<int> ans;

        for(int x : nums2){

            if(nums1MP[x] > 0){
                ans.push_back(x);
                nums1MP[x]--;
            }
        }

        return ans;
    }
};
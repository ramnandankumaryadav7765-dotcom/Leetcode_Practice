class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int> ans;

        for(int x : nums){

            if(x != val){
                ans.push_back(x);
            }
        }

        nums = ans;

        return ans.size();
    }
};
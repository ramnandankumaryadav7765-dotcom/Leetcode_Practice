class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> ans;

        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(to_string(nums[i]));
        }

        sort(ans.begin(), ans.end(), [](string a, string b) {
            return a + b > b + a;
        });

        if(ans[0] == "0") {
            return "0";
        }

        string result = "";

        for(int i = 0; i < ans.size(); i++) {
            result += ans[i];
        }

        return result;
    }
};
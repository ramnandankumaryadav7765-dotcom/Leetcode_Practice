class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (int x : arr) {
            mp[x]++;
        }

        int ans = -1;

        vector<pair<int, int>> vec(mp.begin(), mp.end());

        for (pair<int, int> x : vec) {
            if (x.first == x.second) {
                ans = max(ans, x.first);
            }
        }

        return ans;
    }
};
class Solution {
public:
    double average(vector<int>& salary) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        long long total = 0;

        for(int i = 0 ; i< salary.size() ; i++){
            minimum = min(minimum , salary[i]);
            maximum = max(maximum , salary[i]);
            total+=salary[i];
        }

        total = total - minimum - maximum;
        double ans = total/(salary.size()-2);

        return ans;
    }
};
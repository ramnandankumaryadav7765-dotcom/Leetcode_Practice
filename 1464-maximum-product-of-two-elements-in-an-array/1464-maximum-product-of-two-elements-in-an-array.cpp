class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int slow = 0;
        int second = 1;
        if (nums[second] > nums[slow]) {
            int temp = slow;
            slow = second;
            second = temp;
        }
        for (int fast = 2; fast < nums.size(); fast++) {
            if (nums[fast] > nums[slow]) {
                second = slow;
                slow = fast;
            }
            else if (nums[fast] > nums[second]) {
                second = fast;
            }
        }

        return (nums[slow] - 1) * (nums[second] - 1);
    }
};
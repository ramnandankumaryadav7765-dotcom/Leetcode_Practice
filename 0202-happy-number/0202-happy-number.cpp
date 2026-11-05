class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> seen;

        while(n != 1 && seen.find(n) == seen.end()) {

            seen.insert(n);

            int sum = 0;

            while(n > 0) {
                int lastDigit = n % 10;
                sum += lastDigit * lastDigit;
                n /= 10;
            }

            n = sum;
        }

        return n == 1;
    }
};
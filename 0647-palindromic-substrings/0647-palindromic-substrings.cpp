class Solution {
public:
    int countSubstrings(string s) {

        int count = 0;

        for(int i = 0; i < s.length(); i++) {

            for(int j = i; j < s.length(); j++) {

                int start = i;
                int end = j;

                bool isPalindrome = true;

                while(start < end) {

                    if(s[start] != s[end]) {
                        isPalindrome = false;
                        break;
                    }

                    start++;
                    end--;
                }

                if(isPalindrome) {
                    count++;
                }
            }
        }

        return count;
    }
};
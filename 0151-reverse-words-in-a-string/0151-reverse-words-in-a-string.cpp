class Solution {
public:
    string reverseWords(string s) {

        int n = s.length();
        reverse(s.begin(), s.end());

        int read = 0;
        int write = 0;
        while (read < n) {
            while (read < n && s[read] == ' ') {
                read++;
            }

            if (read == n) {
                break;
            }
            if (write > 0) {
                s[write] = ' ';
                write++;
            }
            int start = write;
            while (read < n && s[read] != ' ') {

                s[write] = s[read];

                write++;
                read++;
            }
            reverse(s.begin() + start, s.begin() + write);
        }
        s.resize(write);

        return s;
    }
};
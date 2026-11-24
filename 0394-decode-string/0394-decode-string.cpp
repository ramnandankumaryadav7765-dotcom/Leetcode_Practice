class Solution {
public:
    string decodeString(string s) {

        stack<pair<string, int>> st;

        string currentString = "";
        int number = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {

                number = number * 10 + (s[i] - '0');
            }
            else if (s[i] == '[') {

                st.push({currentString, number});

                currentString = "";
                number = 0;
            }
            else if (s[i] == ']') {

                pair<string, int> top = st.top();
                st.pop();

                string previousString = top.first;
                int repeat = top.second;

                string decoded = previousString;

                for (int j = 0; j < repeat; j++) {
                    decoded += currentString;
                }

                currentString = decoded;

            }
            else {

                currentString += s[i];

            }
        }

        return currentString;
    }
};
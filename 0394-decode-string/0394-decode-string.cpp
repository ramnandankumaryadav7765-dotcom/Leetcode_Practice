class Solution {
public:
    string decodeString(string s) {

        stack<pair<string, int>> st;

        string current = "";
        int number = 0;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] >= '0' && s[i] <= '9') {
                number = number * 10 + (s[i] - '0');
            }

            else if (s[i] == '[') {
                st.push({current, number});

                current = "";
                number = 0;
            }

            else if (s[i] == ']') {

                pair<string, int> top = st.top();
                st.pop();

                string inner = current;
                current = top.first;

                for (int j = 0; j < top.second; j++) {
                    current += inner;
                }
            }

            else {
                current += s[i];
            }
        }

        return current;
    }
};
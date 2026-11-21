class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);
        vector<bool> visited(26, false);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string result = "";

        for (char ch : s) {
            freq[ch - 'a']--;

            if (visited[ch - 'a']) {
                continue;
            }

            while (!result.empty() &&
                   result.back() > ch &&
                   freq[result.back() - 'a'] > 0) {

                visited[result.back() - 'a'] = false;
                result.pop_back();
            }

            result.push_back(ch);
            visited[ch - 'a'] = true;
        }

        return result;
    }
};

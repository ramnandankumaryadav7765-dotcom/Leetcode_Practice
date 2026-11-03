class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> st;
        unordered_map<int, int> nge;

        // Step 1: Build Next Greater Element mapping using nums2
        for (int i = 0; i < nums2.size(); i++) {

            int current = nums2[i];

            while (!st.empty() && current > st.top()) {
                nge[st.top()] = current;
                st.pop();
            }

            st.push(current);
        }

        // Step 2: Handle unresolved elements
        while (!st.empty()) {
            nge[st.top()] = -1;
            st.pop();
        }

        // Step 3: Build the final answer using nums1
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(nge[nums1[i]]);
        }

        // Step 4: Return the answer
        return ans;
    }
};
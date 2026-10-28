class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> svar(n, 0);      // n pladser, alle sat til 0
        stack<int> st;               // indeholder INDEX

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int dag = st.top();
                st.pop();            // fjern den fra stakken
                svar[dag] = i - dag;
            }
            st.push(i);                // læg i dag på stakken
        }
        return svar;
    }
};

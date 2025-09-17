class Solution {
public:
    string decodedString(string &s) {
        stack<string> st;
        int i = 0;

        while(i < s.size()) {
            if(isdigit(s[i])) {
                string num = "";
                while(i < s.size() && isdigit(s[i])) {
                    num += s[i];
                    i++;
                }
                st.push(num);
            }
            else if(s[i] == '[' || isalpha(s[i])) {
                st.push(string(1, s[i]));
                i++;
            }
            else if(s[i] == ']') {
                string temp = "";
                while(!st.empty() && st.top() != "[") {
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop(); // remove '['

                int k = stoi(st.top());
                st.pop();

                string expanded = "";
                for(int j = 0; j < k; j++) expanded += temp;
                st.push(expanded);

                i++;
            }
            else {
                i++;
            }
        }

        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};

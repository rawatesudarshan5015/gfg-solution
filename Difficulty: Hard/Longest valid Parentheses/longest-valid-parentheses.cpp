//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLength(string& s) {
        // code here
        
        stack<int>st;
        st.push(-1);
        int count = 0;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
                st.push(i);
            }else{
                st.pop();
                if(!st.empty()){
                    count = max(count,i-st.top());
                }else{
                    st.push(i);
                }
            }
            
        }
        return count;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char* s) {
        // Your code here
       long long int ans = 0;
        int sign = 1;
        int i = 0;

        // Ignore leading whitespace
        while (s[i] == ' ') {
            i++;
        }

        // Check for optional '+' or '-'
        if (s[i] == '-' || s[i] == '+') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Process the numerical part
        while (s[i] >= '0' && s[i] <= '9') {
            int num = s[i] - '0';
            ans = ans * 10 + num;

            // Handle overflow/underflow
            if (sign == 1 && ans >= INT_MAX) return INT_MAX;
            if (sign == -1 && -ans <= INT_MIN) return INT_MIN;

            i++;
        }

        return static_cast<int>(sign * ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
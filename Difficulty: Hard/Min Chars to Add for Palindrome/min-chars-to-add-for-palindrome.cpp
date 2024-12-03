//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
//   bool isPalindrome(string &s, int i, int j) {
//     while (i < j) {
      
//         // If characters at the ends are not equal, it's not a palindrome
//         if (s[i] != s[j]) {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
//     int minChar(string& s) {
//         // Write your code here
//         int cnt = 0;
//     int i = s.size() - 1;
    
//     // Iterate from the end of the string, checking for the longest 
//     // palindrome starting from the beginning
//     while (i >= 0 && !isPalindrome(s, 0, i)) {
        
//         i--;
//         cnt++;
//     }
    
//     return cnt;
//     }

    int minChar(string& s) {
        string rev = s; 
        reverse(rev.begin(), rev.end());
        string newS = s + '#' + rev; 
        int n = newS.size();
        vector<int> lps(n+1, 0);
        for ( int i = 1; i<n; i++ ){
            int j = lps[i-1];
            while ( j > 0 && newS[i] != newS[j] ){
                j = lps[j-1];
            } 
            if ( newS[i] == newS[j] ){ 
                j++;
            }
            lps[i] = j;
        } 
        return s.size() - lps[n-1];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
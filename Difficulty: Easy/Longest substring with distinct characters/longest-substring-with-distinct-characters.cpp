//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        // int count =0;
        int ans =0;
        int j=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
            int count = mp.size();
               ans = max(count,ans);
               j=mp[s[i]]+1;
               i=j;
                mp.clear();
                mp[s[i]]=j;
                continue;
            }
            mp[s[i]]=j;
            int a = mp.size();
            ans = max(a,ans);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
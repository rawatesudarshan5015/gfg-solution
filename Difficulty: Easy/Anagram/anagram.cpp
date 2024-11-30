//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        
        if(s1.length()!=s2.length()){
            return false;
        }
        // for(auto x:s1){
        //     mp[x]++;
        // }
        
        // for(auto x:s2){
        //     if(mp.find(x)!=mp.end()){
        //         mp[x]--;
        //         if(map[a[j]]==0){
        //             map.erase(a[j]);
        //         }
        //     }
        // }
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        if(s1!=s2){
            return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
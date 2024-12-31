//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int longestsequence =1;
        int count=1;
        sort(arr.begin(),arr.end());
        
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==1){
                count ++;
                longestsequence = max(count,longestsequence);
            }else if(arr[i+1]-arr[i]==0){
                continue;
            }else{
                count =1;
            }
        }
        return longestsequence;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
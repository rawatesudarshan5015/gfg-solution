//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   
int countPairs(vector<int> &arr, int target) {
    unordered_map<int, int> mp;
    int count = 0;

    // Count frequencies of each element in the array
    for(int i=0;i<arr.size();i++){
        if(mp.find(target-arr[i])!=mp.end()){
            count += mp[target-arr[i]];
        }
    mp[arr[i]]++;
    }
   
    return count;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);

        cout << res << endl << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
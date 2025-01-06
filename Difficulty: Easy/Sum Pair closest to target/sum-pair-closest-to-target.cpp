//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int a=arr[0];
        int b=arr[arr.size()-1];
        int i=0;
        int j=arr.size()-1;
         if(arr.size()<2) {
                return {};
         }
         int diff =INT_MAX;
        sort(arr.begin(),arr.end());
        while(i<j){
            int currsum = arr[i]+arr[j];
            int currdiff = abs(target-currsum);
            if(currdiff<diff){
                    diff = currdiff;
                    a = arr[i];
                    b = arr[j];
                
            }
            if(currsum<=target){
                i++;
            }else{
                j--;
            }
        }
        return {a,b};
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends
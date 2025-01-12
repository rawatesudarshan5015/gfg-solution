//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int i =0;
        int j = arr.size()-1;
        int leftmax=0;
        int rightmax=0;
        long long res=0;
        
        while(i<=j){
            if(arr[i]<=arr[j]){
                if(arr[i]<=leftmax) {
                    res += leftmax-arr[i];
                }else{
                    leftmax = arr[i];
                }
                i++;
            }else{
                if(arr[j]<=rightmax){
                    res += rightmax - arr[j];
                }else{
                    rightmax = arr[j];
                }
                j--;
            }
        }
        return res;
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
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
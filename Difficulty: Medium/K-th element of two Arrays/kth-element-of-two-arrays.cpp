//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        
      int i = 0, j = 0, count = 0;

    // Merge process to find the kth element
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            count++;
            if (count == k) return a[i];
            i++;
        } else {
            count++;
            if (count == k) return b[j];
            j++;
        }
    }

    // Handle remaining elements in 'a'
    while (i < a.size()) {
        count++;
        if (count == k) return a[i];
        i++;
    }

    // Handle remaining elements in 'b'
    while (j < b.size()) {
        count++;
        if (count == k) return b[j];
        j++;
    }

    return -1;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends
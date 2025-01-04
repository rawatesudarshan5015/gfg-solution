//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
         unordered_map<int,int>mp;
         
         
         for(int a:arr){
             mp[a]++;
         }
        
        int count =0;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]--;
            
            for(int j=0;j<i;j++){
                if(mp.find(target-arr[i]-arr[j])!=mp.end()){
                    count +=mp[target-arr[i]-arr[j]];
                }
            }
            
        }
        return count;
        
        
        
        
        // int count =0;
        // for(int i=0;i<arr.size()-2;i++){
        //     for(int j=i+1;j<arr.size()-1;j++){
        //         for(int k=j+1;k<arr.size();k++){
        //             if(arr[i]+arr[j]+arr[k]==target){
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // return count;
        
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
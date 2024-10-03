//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
              if(nums.empty()) return{-1}; 
        int n=nums.size(); 
        int x=n/3;
        unordered_map<int,int>mp; 
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++; 
        }
        vector<int>ans;

         for(auto p:mp){
             if(p.second>x){
                 ans.push_back(p.first); 
             }
         }

         if(ans.empty()) ans.push_back(-1); 

         sort(ans.begin(),ans.end());

         return ans; 
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
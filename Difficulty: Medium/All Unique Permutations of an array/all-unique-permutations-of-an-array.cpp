class Solution {
  public:
//   map<vector<int>,int>mp;
  
//     void solve(vector<int> arr,int i,int j){
//         if(i==arr.size()) return;
//         swap(arr[i],arr[j]);
        
//         solve(arr,i+1,j);
//         mp[arr]++;
//         solve(arr,i,j+1);
//         mp[arr]++;
//     }
    
    
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        do{
            ans.push_back(arr);
        }while(next_permutation(arr.begin(),arr.end()));
        // sort(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};
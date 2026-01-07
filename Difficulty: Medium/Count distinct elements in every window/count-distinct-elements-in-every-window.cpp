class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<k;i++){
            mp[arr[i]]++;
        }
        
        ans.push_back(mp.size());
        
        for(int i=k;i<arr.size();i++){
            mp[arr[i-k]]--;
            mp[arr[i]]++;
            if(mp[arr[i-k]]<1) mp.erase(arr[i-k]);
            
            ans.push_back(mp.size());
        }
        
        return ans;
        
        
    }
};
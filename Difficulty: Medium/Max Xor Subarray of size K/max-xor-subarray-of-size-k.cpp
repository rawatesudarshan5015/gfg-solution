class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int ans = 0;
        int XOR = 0;
        
        for(int i=0;i<k-1;i++){
            XOR ^= arr[i];
        }
        
        for(int i=k-1;i<n;i++){
            XOR ^=arr[i];
            ans = max(XOR,ans);
            XOR ^= arr[i-k+1];
        }
        return ans;
        
    }
};
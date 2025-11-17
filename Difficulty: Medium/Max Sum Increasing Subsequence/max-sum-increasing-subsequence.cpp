class Solution {
  public:
    int maxSumIS(vector<int>& arr) {
        // code here
        vector<int>dp(arr.size());
        dp[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            int prevBest = 0;
            for(int j=i-1;j>=0;j--){
                if(arr[j]<arr[i]){
                    prevBest = max(prevBest,dp[j]);
                }
            }
            
            dp[i]=arr[i]+prevBest;
            
           
        }
        int maxSum = 0;
        
        for(int i=0;i<dp.size();i++){
            maxSum = max(maxSum,dp[i]);
        }

        return maxSum;
    }
};
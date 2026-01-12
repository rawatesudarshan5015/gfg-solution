class Solution {
  public:
  
    int solve(int idx,int W,vector<int>&val,vector<int>&wt,vector<vector<int>>&dp){
        if(idx==0){
            if(wt[0]<=W){
                return val[0];
            }else{
                return 0;
            }
        }
        
        if(dp[idx][W]!=-1) return dp[idx][W];
        
        int notTake = 0 + solve(idx-1,W,val,wt,dp);
        int take = INT_MIN;
        if(wt[idx]<=W){
            take = val[idx] + solve(idx-1,W-wt[idx],val,wt,dp);
        }
        
        int ans = max(take,notTake);
        
        return dp[idx][W] = ans;
        
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = wt.size()-1;
        
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
        
        return solve(n,W,val,wt,dp);
        
    }
};
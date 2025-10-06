class Solution {
  public:
    
    
    bool solve(int i,vector<int>& arr){
        if(i==arr.size()-2 && arr[i]<=arr[i+1] ){
            return true;
        }
        
        if(arr[i]>arr[i+1]){
            return false;
        }
       
        return  solve(i+1,arr);
        
        
    }
  
    bool isSorted(vector<int>& arr) {
        // code here
        if(arr.size()==1){
            return true;
        }
        return solve(0,arr);
    }
};
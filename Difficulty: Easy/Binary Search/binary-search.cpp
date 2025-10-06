class Solution {
  public:
    
    
    int solve(vector<int> &arr,int start,int end, int k){
        
    //base condition
        if(start>end){
            return -1;
        }
        
        int mid = (start+end)/2;
        
                if (arr[mid] == k) {
            // Search on left to find first occurrence
            int left = solve(arr, start, mid - 1, k);
            return (left != -1) ? left : mid;
        }
        
        if(arr[mid]>k){
            return solve(arr,start,mid-1,k);
        }else{
            return solve(arr,mid+1,end,k);
        }
    
    }
  
    
    int binarysearch(vector<int> &arr, int k) {
        // code here
        return solve(arr,0,arr.size()-1,k);
    }
};
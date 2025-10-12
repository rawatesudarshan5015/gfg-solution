// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int ans = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<arr[i-1]){
                return arr[i-1];
            }
        }
        return ans;
    }
};
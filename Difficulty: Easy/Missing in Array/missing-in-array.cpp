class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int i;
        for(i=0;i<arr.size();i++){
            if(i+1!=arr[i]){
                return i+1;
            }
        }
        return i+1;
    }
};
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum = 0;
        int j=0;
        for(j=0;j<k;j++){
            sum+=arr[j];
        }
        int temp = sum;
        while(j<arr.size()){
            temp -=arr[j-k];
            temp +=arr[j];
            sum = max(temp,sum);
            j++;
        }
        return sum;
    }
};
class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        
 sort(arr.begin(), arr.end());

        // Initial maximum difference
        
        int n = arr.size();
        // Initial smallest and largest values after adding/subtracting k
        int ans = arr[n-1]-arr[0];
        
        // Temporary variables to store the minimum and maximum values in the loop
        int minHeight, maxHeight;

        // Traverse the array and adjust the difference
        for (int i = 0; i < n; i++) {
            if (arr[i]-k < 0) continue;
            minHeight = min(arr[0]+k, arr[i] - k);
            maxHeight = max(arr[n-1]-k, arr[i-1] + k);
            
            // Skip the iteration if mi is negative
            

            // Update the answer with the minimum difference found
            ans = min(ans, maxHeight - minHeight);
        }

        return ans;
    }
};
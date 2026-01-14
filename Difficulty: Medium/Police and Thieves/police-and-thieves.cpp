class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        int n = arr.size();
        int i = 0, j = 0, count = 0;

        while (i < n && j < n) {
            // Find next police
            while (i < n && arr[i] != 'P') i++;
            
            // Find next thief
            while (j < n && arr[j] != 'T') j++;

            if (i < n && j < n) {
                if (abs(i - j) <= k) {
                    count++;
                    i++;
                    j++;
                } else if (i < j) {
                    i++;
                } else {
                    j++;
                }
            }
        }
        return count;
    }
};

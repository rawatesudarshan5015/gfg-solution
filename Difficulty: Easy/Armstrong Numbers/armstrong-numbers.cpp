// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        string temp = to_string(n);
        int size = temp.size();
        long long ans = 0;
        
        for(int i=0;i<size;i++){
            ans += pow(temp[i]-'0',size);
        }
        if(ans==n) return true;
        
        return false;
    }
};
class Solution {
  public:
  
  int solve(int n,int reverse){
      if(reverse==1){
          return n;
      }
      
       
      return n*solve(n,reverse-1);
  }
    int reverseExponentiation(int n) {
        // code here
        int reverse= 0;
        int temp  = n;
        while(temp>0){
            reverse = reverse*10 + temp%10;
            temp = temp/10;
        }
        
        
        int ans = solve(n,reverse);
        
        return ans;
        
    }
};
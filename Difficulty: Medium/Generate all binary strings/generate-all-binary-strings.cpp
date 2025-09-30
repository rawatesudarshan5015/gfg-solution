class Solution {
  public:
  
  
  string solve(int i,int n){
      
      string binary ="";
      
      while(i!=0){
          binary += to_string(i%2);
          i=i/2;
        //   cout<<i<<" ";
      }
      if(binary.size()!=n){
          int temp = binary.size();
          while(temp!=n){
              binary+="0";
              temp++;
          }
      }
      reverse(binary.begin(),binary.end());
      return binary;
      
  }
    vector<string> binstr(int n) {
        // code here
        vector<string>ans;
        
        
        for(int i=0;i<pow(2,n);i++){
            ans.push_back(solve(i,n));
        }
        return ans;
    }
};
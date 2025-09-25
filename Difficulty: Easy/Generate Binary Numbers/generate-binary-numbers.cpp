class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        vector<string>ans;
        
        for(int i=1;i<=n;i++){
            string temp = "";
            int decimal=i;
            while(decimal!=0){
                temp+=to_string(decimal%2);
                decimal /=2; 
                
            }
            reverse(temp.begin(),temp.end());
            
            ans.push_back(temp);
                
            
        }
        return ans;
    }
};
class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        if(arr.size()<3){
            return false;
        }
        unordered_set<int>st;
       
        
        for(auto x:arr){
            st.insert(x*x);
        }
        
        for(int x:st){
            for(int i:st){
                if(x!=i){
                    if(st.count(x+i)) return true;
                }
            }
            
        }
        return false;
    }
};
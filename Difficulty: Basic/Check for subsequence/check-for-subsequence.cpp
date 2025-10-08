
class Solution {
  public:
    bool isSubSequence(string A, string B) {
        // code here
        int i =0;
        int j=0;
        if(A.size()>B.size()) return false;
        // cout<<A.size()<<endl;
        while(j<B.size() && i<A.size()){
            
            if(A[i]==B[j]){
                            

                i++;
                j++;

            }else j++;
            
        }
        // i++;
        // cout<<A.size();
        
        if(i==A.size()) return true;
        return false;
        
    }
};
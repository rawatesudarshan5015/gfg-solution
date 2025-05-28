class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // code here
         int rows = mat.size();
        int cols = mat[0].size();
        
        for(int i=0;i<rows;i++){
            for(int j=i+1;j<rows;j++){
                int countOnes = 0;
               for(int col =0;col<cols;col++){
                    if(mat[i][col]==1 && mat[j][col]==1){
                        countOnes++;
                    }
               }
               if(countOnes>=2) return true;
            }
        }
        
        
       return false; 
    }
};
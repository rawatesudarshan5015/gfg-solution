class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int five = 0;
        int ten =0;
        int twenty = 0;
        
        for(int x:arr){
            if(x==5){
                five++;
               
            }else if(x==10){
                ten++;
                if(five<1){
                    return false;
                }else{
                    five--;
                }
            }else if(x==20){
                
                twenty++;
               
                if(ten<1 && five<3) return false;
                else if(ten>0 && five<1) return false;
                else if(ten>0 && five>0){
                    ten--;
                    five--;
                }else if(five>2){
                    five -=3;
                }
                
            }
        }
        return true;
    }
};
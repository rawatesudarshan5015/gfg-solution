class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
        // sort(x.begin(),x.end(),greater<int>);
        // sort(y.begin(),y.end(),greater<int>);
        vector<pair<int,char>>vec;
        int horizontal =1;
        int vertical = 1;
        for(int i:x){
            vec.push_back({i,'x'});
        }
        
        for(int i:y){
            vec.push_back({i,'y'});
        }
        
        
       std::sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
        return a.first > b.first;
    });
    int totalCost = 0;
        
        
        for(auto x:vec){
            if(x.second=='x'){
                totalCost +=x.first*horizontal;
                vertical++;
            }else{
                totalCost +=x.first*vertical;
                horizontal++;
            }
        }
        
        
      return totalCost;  
        
    }
};

class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        //  code here
        int gasAvailable = 0;
        int gasCost = 0;
        
        for(int i=0;i<gas.size();i++){
            gasAvailable +=gas[i];
            gasCost += cost[i];
        }
        
        if(gasAvailable<gasCost){
            return -1;
        }
        int start = 0;
        int tank = 0;
        for(int i=0;i<gas.size();i++){
            tank += gas[i]-cost[i];
            
            if(tank<0){
                start = i+1;
                tank = 0;
            }
        }
        return start;
    }
};
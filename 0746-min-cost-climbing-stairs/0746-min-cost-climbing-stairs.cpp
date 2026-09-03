class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
    int step0=cost[0],step1=cost[1];
    for(int i=2;i<n;i++){
        int step2=cost[i]+min(step0,step1);
        step0=step1;
        step1=step2;
    }
    return min(step0,step1);
        
    }
};
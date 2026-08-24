class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
    int n=costs.size(); 
    priority_queue<int,vector<int>,greater<int>> q1,q2;
    long long tc=0;
    int i=0;int j=n-1;
    while(i<candidates && i<=j)
    {
        q1.push(costs[i]);
        i++;
    }
    while(j>=n-candidates && i<=j){
        q2.push(costs[j]);
        j--;
    }

    while(k>0){
        int c1=q1.empty()?INT_MAX:q1.top();
        int c2=q2.empty()?INT_MAX:q2.top();

        if(c1<=c2){
            tc+=c1;
            q1.pop();
            if(i<=j){
                q1.push(costs[i]);
                i++;
            }
        } else{
            tc+=c2;
            q2.pop();
            if(i<=j){
                q2.push(costs[j]);
                j--;
            }
        }
        k--;
    }
    return tc;
    }
};
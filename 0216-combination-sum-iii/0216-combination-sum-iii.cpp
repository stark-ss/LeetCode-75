class Solution {
public:
    void results(vector<vector<int>>& a,int b,int k ,int n,vector<int>& t){

        if(k==0 && n==0){
         a.push_back(t); 
         return;
             }

        if(b>9 || n<0 || k<0) return;
        t.push_back(b);
         results(a,b+1,k-1,n-b,t);
        t.pop_back();
        results(a,b+1,k,n,t);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> res;
    vector<int> t; 
    results(res,1,k,n,t);
    return res;
    }
};
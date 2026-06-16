class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int n=candies.size();

    vector<bool>ar1(n);
    int max=*max_element(candies.begin(),candies.end());
    for(int i=0;i<n;i++){
       if(candies[i]+extraCandies>=max)
         ar1[i]=true;
        else
        ar1[i]=false;
    }
    return ar1;
    }
};
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    int n=spells.size();
    int m=potions.size();
    vector<int> res;
    sort(potions.begin(),potions.end());
    for(int i=0;i<n;i++){
        int low=0,high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((long long)potions[mid]*spells[i]>=success)
            high=mid-1;
            else low=mid+1;
        }
        res.push_back(m-low);
    }
    return res;
    }
};
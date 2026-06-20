class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
    int s=0,m=0;
    for(int i=0;i<n;i++){
            s=s+gain[i];
            if(s>m)
            m=s;       
    }
    return m;
    }
};
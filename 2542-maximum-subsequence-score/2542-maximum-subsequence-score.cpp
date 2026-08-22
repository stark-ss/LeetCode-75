class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
    int n=nums1.size();
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        p.push_back({nums2[i],nums1[i]});
    }
    sort(p.rbegin(),p.rend());

    priority_queue<int,vector<int>,greater<int>> q;
    long long cs=0;
    long long maxx=0;
    for(int i=0;i<n;i++){
        cs+=p[i].second;
        q.push(p[i].second);
        if(q.size()>k){
            cs-=q.top();
            q.pop();
        }
        if(q.size()==k){
            maxx=max(maxx,cs*p[i].first);
        }
    }
    return maxx;
    }
};
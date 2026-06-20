class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size(),n2=nums2.size();
    vector<int> answer0,answer1;
    unordered_set<int> h1,h2;
    vector<vector<int>> r;

    for(int i=0;i<n1;i++)
        h1.insert(nums1[i]);

    for(int i=0;i<n2;i++)
        h2.insert(nums2[i]);
     
    for(int i : h1){
        if(h2.find(i)==h2.end())
        answer0.push_back(i);
        }

    for(int i : h2){
        if(h1.find(i)==h1.end())
        answer1.push_back(i);
        }

    r.push_back(answer0);
    r.push_back(answer1);
   
return r;
 
    }
};
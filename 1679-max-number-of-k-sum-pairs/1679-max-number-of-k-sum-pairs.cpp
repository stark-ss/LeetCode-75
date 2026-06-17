class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> hs;
    int c=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
   
    if (hs.find(nums[i]) != hs.end()){ 
    c++;    
    hs[nums[i]]--;
    if(hs[nums[i]]==0)
     hs.erase(nums[i]);}
    else{
     hs[k-nums[i]]++;
    }
}
    return c;
}
};
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int l=INT_MAX,f=INT_MAX;
        int n=nums.size();
        if(n<3)
            return false;
        for(int i=0;i<n;i++){
            if(nums[i]<=f)
            f=nums[i];
            else if(nums[i]<=l)
            l=nums[i];
            else{
             return true;
            }
        }
        return false;
    }
};
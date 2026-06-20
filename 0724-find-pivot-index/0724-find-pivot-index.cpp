class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int n=nums.size();
    int s=0,sl=0,sr=0,p=-1;
    for(int i=0;i<n;i++)
    s=s+nums[i];
    for(int i=0;i<n;i++){
        sr=s-sl-nums[i];
        if(sr==sl){
            p=i;
            break;
        }
        sl=sl+nums[i];
    }
    return p;
    }
};
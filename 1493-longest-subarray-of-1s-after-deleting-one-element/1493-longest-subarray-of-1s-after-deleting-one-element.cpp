class Solution {
public:
    int longestSubarray(vector<int>& nums) {
    int n=nums.size();
    int k=0,c=0,j=0,p=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            k++;
          if(k>1){
           c=i-p-1;
           k--;
          }
          p=i;
        }
        
       else{
        c++;
       }
       if(c>j)
       j=c;
    } 
    if(j==n)
    j=j-1;
    return j;
    }
};
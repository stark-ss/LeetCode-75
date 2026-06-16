class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int n=nums.size();
    int temp,c=0,j;
    for(int i=0;i<n;i++){
        if(nums[i]==0 && c==0){
            j=i;
            c++;}
        
         else if(nums[i]!=0 && c!=0){
            temp=nums[i];
            nums[j]=temp;
            nums[i]=0;
            j=j+1;
            }
       }   
    }
};
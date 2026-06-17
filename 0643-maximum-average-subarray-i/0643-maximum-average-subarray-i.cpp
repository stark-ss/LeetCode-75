class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int n=nums.size();
    int c=0,t=0;
    double sum=0,kk=k;
    for(int i=0;i<n;i++){
     if(c<k){
        t=t+nums[i];
        sum=sum+nums[i];
        nums[i]=t;
        c++;     
     }
     else{
       t=t+nums[i];
       nums[i]=t; 
       if(t-nums[i-k]>=sum)
       sum=t-nums[i-k];
       c++;
     }
    }
    return sum/kk;
}
};
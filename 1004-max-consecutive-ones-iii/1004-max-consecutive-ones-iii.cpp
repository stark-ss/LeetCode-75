class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     queue<int> ind;
    int q=k;
    int n=nums.size();
    int c=0,j=0,p=0;
    for(int i=0;i<n;i++){
      if(k>0 && nums[i]==0){
        ind.push(i);
        k--;
      }
      else if(k<=0 && nums[i]==0){
        if(!ind.empty()){
        p=ind.front()+1;
        ind.pop();
        ind.push(i);
        }
        else
        p=i+1;
    }
     c=i-p+1;
     if(c>j)
     j=c;
           
    }
return j;
}
};
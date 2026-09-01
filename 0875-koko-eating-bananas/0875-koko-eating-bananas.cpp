class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
   int n=piles.size();
   int max=0,min=1;
   for(int i=0;i<n;i++){
    if(piles[i]>max)
    max=piles[i];
   }
   while(min<max){
    int mid=min+(max-min)/2;
    long long time=0;
    for(int i=0;i<n;i++){
        time+=(piles[i]+mid-1)/mid;
    }
    if(time>h)
    min=mid+1;
    else
    max=mid;
   }
   return min;
    }
};
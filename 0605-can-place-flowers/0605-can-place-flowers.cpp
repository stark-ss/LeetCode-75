class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
          int k=flowerbed.size();
    for(int i=0;i<k;i++){
        if(n==0)
        break;
        else  if(flowerbed[i]==0){
        if(i==0 ){
            if(k==1){
             flowerbed[0]=1;
              n--;}
              else if(k>1 && flowerbed[1]==0){
                flowerbed[0]=1;
                n--;
                i++;//88
              }
        }
        else if(i==k-1 && flowerbed[k-2]==0 ){
            flowerbed[k-1]=1;
            n--;
        }
        else {
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
                i++;//558
                if(n==0)
                break;
            }
        }
       }
    }
    if(n==0)
    return true;
    else 
    return false;
    }
};
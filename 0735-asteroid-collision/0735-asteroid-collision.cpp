class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    int n=asteroids.size();
    vector<int> res;
    for(int i=0;i<n;i++){
        if(res.empty() ){
            res.push_back(asteroids[i]);
        }
       else if(res.back()>0 && asteroids[i]<0){
        while(!res.empty() && abs(asteroids[i])>res.back() && res.back()>0){
          res.pop_back();
        }
        if(!res.empty() && res.back()==abs(asteroids[i]))
        res.pop_back();
        else if(res.empty() || res.back()<0)
        res.push_back(asteroids[i]);
        }
        else{
            res.push_back(asteroids[i]);
        }
      }
      return res;
    }
};
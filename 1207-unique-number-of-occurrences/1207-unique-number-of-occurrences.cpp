class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         unordered_map<int,int> h;
    int n=arr.size();
    for(int i=0;i<n;i++){
        h[arr[i]]++;   
        }
        
        unordered_set<int> r;
        for(auto i :h){
            if(r.find(i.second)!=r.end()){
                r.insert(-1);
                break;
            }
            r.insert(i.second);
      }
        if(r.find(-1)!=r.end())
        return false;
        else
        return true;
    }
};
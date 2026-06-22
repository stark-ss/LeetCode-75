class Solution {
public:
    string removeStars(string s) {
     string res="";
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]!='*'){
        res.push_back(s[i]);}
        else if(s[i]=='*' && i!=0 && !res.empty()){ 
        res.pop_back();}
    }
    return res;
    }
};
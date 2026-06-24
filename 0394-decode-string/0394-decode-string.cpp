class Solution {
public:
    string decodeString(string s) {
    int n=s.length();
    string res="",temp="",d="";
    
    for(int i=0;i<n;i++){
     if(s[i]!=']'){
      temp.push_back(s[i]);
     }

     else{
      while(!temp.empty() && !isdigit(temp.back())){
        if(isalpha(temp.back())){
          res+=temp.back();
        }
        temp.pop_back();
      }
      reverse(res.begin(), res.end());
      while(!temp.empty() && isdigit(temp.back())){
       d+=temp.back();
      temp.pop_back();
    }
    reverse(d.begin(), d.end());
    int v=stoi(d);
    d="";
      while(v>0){
        temp.append(res);
        v--;
      }
      res="";
     }
    } 
    return temp;   
    }
};
class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
     string t="",final="";
     stack<string>str;
    int n=s.length();
    for(int i=0;i<n;i++){
     if(s[i]!=' ' )
     t+=s[i];
     if(s[i]==' ' && t!=""){
        str.push(t);
     t="";}
    }
    t="";
    while(!str.empty()){
     t+=str.top()+' ';   
    str.pop();
    }
   int k=t.length();
   if(k!=0)
   final=t.substr(0, k-1);
   return final;
 
    }
};
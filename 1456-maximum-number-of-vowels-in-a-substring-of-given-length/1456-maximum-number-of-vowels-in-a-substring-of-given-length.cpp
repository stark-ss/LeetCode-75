class Solution {
public:
    int maxVowels(string s, int k) {
    unordered_set<char> vow={'a','e','i','o','u'};
    int n=s.length();
    int p=0,j=0;
    for(int i=0;i<n;i++){
        if(i<k){
         if(vow.find(s[i])!=vow.end())
         p++;  
         if(p>j)
         j=p;
        }
        else{
          if(vow.find(s[i])!=vow.end())
          p++;
          if(vow.find(s[i-k])!=vow.end())
          p--;
          if(p>=j)
          j=p;
        }
        
    }
return j;
}
};
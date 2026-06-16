class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int i=word1.length(),j=word2.length(),n=0;
      string r="";
    while(n<i || n<j){
        if(n<i)
       r+=word1[n];
        if(n<j)
        r+=word2[n];
        n++;
    }
return r;
}
};


    
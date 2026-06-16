class Solution {
public:
    string reverseVowels(string s) {
         int n=s.length();
         string c;
     for(int i=0;i<n;i++){
        if(s[i]=='a' ||  s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            c+=s[i];
        }
    }
    int k=c.length();
        for(int i=0;i<n;i++){
        if(s[i]=='a' ||  s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
         s[i]=c[--k];
        }
    }
    
    return s;

    }
};
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
   string r="";
    int i=str1.length(),j=str2.length();
    if(str1+str2==str2+str1){
        int k=gcd(i,j);
        r=str1.substr(0,k);
    }
    else
    r="";

    return r;
    }
};
class Solution {
public:
    int compress(vector<char>& chars) {
         int n=chars.size();
    int c=1,j=0;
    for(int i=0;i<n;i++){
       if(i+1<n && chars[i]==chars[i+1])
       c++;
      else{
       chars[j] = chars[i]; 
       j++;
      if (c > 1) {
       string temp = to_string(c);
       for (char ch : temp) {
       chars[j] = ch; 
       j++;        
    }
}
 c=1;
      }
        }
    
return j;
    }
};
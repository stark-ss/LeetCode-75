class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
    int n=isConnected.size();
    vector<bool> visited(n,false);
    int cc=0;
     for(int i=0;i<n;i++){
        if(!visited[i]){
         cc++;
         visited[i]=true;
         queue<int> q;
         q.push(i);

         while(!q.empty()){
          int curr=q.front();
          q.pop();

          for(int j=0;j<n;j++){
            if(isConnected[curr][j]==1 && !visited[j]){
                visited[j]=true;
                q.push(j);
            }
          }
         
         }
        }
     }
     return cc;
    }
};
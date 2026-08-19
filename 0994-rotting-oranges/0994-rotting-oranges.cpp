class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    int m=grid.size();
   int n=grid[0].size();
   int row[]={0,0,1,-1};
   int col[]={1,-1,0,0};
   int f=0;
   queue<vector<int>> q;
   for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        if(grid[i][j]==2)
        q.push({i,j,0});
        else if(grid[i][j]==1)
        f++;
    }
   }
   if(f==0){
    return 0;
   }
   int time=0;
   while(!q.empty()){
    auto current=q.front();
    q.pop();
    int r=current[0];
    int c=current[1];
    int t=current[2];
    time =t;
    for(int d=0;d<4;d++){
        int nr=r+row[d];
        int nc=c+col[d];
        
        if( nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]==1){
            grid[nr][nc]=2;
            f--;
            q.push({nr,nc,t+1});
        }
    }
   }
   if(f>0)
   return -1;
   else
   return time;
    }
};
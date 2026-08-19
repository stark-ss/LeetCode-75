class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
   int i=entrance[0],j=entrance[1];
   int n=maze.size();
   int m=maze[0].size();
   int row[]={0,0,1,-1};
   int col[]={1,-1,0,0};
   queue<vector<int>> q;
   q.push({i,j,0});
   maze[i][j]='+';
   while(!q.empty()){
    auto current=q.front();
    q.pop();
    int r=current[0];
    int c=current[1];
    int step=current[2];
    for(int d=0;d<4;d++){
        int nr=r+row[d];
        int nc=c+col[d];

        if(nr>=0 && nr<n && nc>=0 && nc<m && maze[nr][nc]=='.'){
            if(nr==0 || nr==n-1 || nc==0 || nc==m-1)
            return step+1;
            
            maze[nr][nc]='+';
            q.push({nr,nc,step+1});
        }
    }
   }
   return -1;
}
};
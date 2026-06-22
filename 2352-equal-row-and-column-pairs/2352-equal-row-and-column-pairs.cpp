class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
            int n=grid.size();
    vector<vector<int>> k;
    int c=0;
    vector<int> col;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        col.push_back(grid[j][i]);
      }
      k.push_back(col);
      col.clear();
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if(k[i]==grid[j])
         c++;
        }
    }
return c;
    }
};
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
    int n=grid.size();
    vector<vector<int>> k;
    int c=0;
    map<vector<int>,int> row;
    for(int i=0;i<n;i++)
    row[grid[i]]++;
    vector<int> col;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        col.push_back(grid[j][i]);
      }
      if(row.find(col)!=row.end())
      c+=row[col];
      col.clear();
    }
return c;
    }
};
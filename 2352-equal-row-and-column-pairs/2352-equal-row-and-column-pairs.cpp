class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
    struct VectorHash {
    size_t operator()(const vector<int>& v) const {
        size_t hash_value = 0;
        for (int i : v) {
            // Combine hashes of individual elements
            hash_value ^= std::hash<int>{}(i) + 0x9e3779b9 + (hash_value << 6) + (hash_value >> 2);
        }
        return hash_value;
    }
};
    int n=grid.size();
    vector<vector<int>> k;
    int c=0;
    unordered_map<vector<int>,int,VectorHash> row;
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
class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
     vector<vector<pair<int,int>>> adj(n);
    for(auto& con : connections){
        int u=con[0];
        int v=con[1];
        adj[u].push_back({v,1});
        adj[v].push_back({u,0});
    }

    vector<bool> visit(n,false);
    visit[0]=true;
    queue<int> q;
    q.push(0);
    int cc=0;

    while (!q.empty())
    {
     int curr=q.front();
     q.pop();
     for(auto& i : adj[curr]){
        int neigh=i.first;
        int cost=i.second;

        if(!visit[neigh]){
            visit[neigh]=true;
            cc+=cost;
            q.push(neigh);
        }
     }
    }
    return cc;
    }
};
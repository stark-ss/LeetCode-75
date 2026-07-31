class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
    unordered_map<string,int> vid;
    int id=0;
    
    for(const auto& eq : equations){
        if(vid.find(eq[0])==vid.end()) vid[eq[0]]=id++;
        if(vid.find(eq[1])==vid.end()) vid[eq[1]]=id++;
    }
     int n=id;

     vector<vector<pair<int,double>>> adj(n);

     for (int i = 0; i < values.size(); i++) {
            int u = vid[equations[i][0]];
            int v = vid[equations[i][1]];
            double weight = values[i];

            adj[u].push_back({v, weight});
            adj[v].push_back({u, 1.0 / weight});
     }

     vector<double> results;

     for(const auto& q : queries){
        string u=q[0],v=q[1];

        if(vid.find(u)==vid.end() || vid.find(v)==vid.end()){
            results.push_back(-1.0);
            continue;
        }

   

        int start=vid[u];
        int target=vid[v];

        if(start==target){
            results.push_back(1.0);
            continue;
        }

        queue<pair<int,double>> qq;
        vector<bool> visited(n,false);
        bool found=false;
        qq.push({start,1.0});
        visited[start]=true;

        while(!qq.empty()){
            auto[node,prod]=qq.front();
            qq.pop();
            
            if(node==target){
                results.push_back(prod);
                found=true;
                break;
            }

            for(const auto& neig:adj[node]){
                int nextnode=neig.first;
                double weight=neig.second;
                if(!visited[nextnode]){
                    visited[nextnode]=true;
                    qq.push({nextnode,prod*weight});
                }
            }
        }
        if(!found){
        results.push_back(-1.0);
        }
     }
    return results ;
    }
};
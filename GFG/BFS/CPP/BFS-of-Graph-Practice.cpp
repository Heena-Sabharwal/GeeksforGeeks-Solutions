class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int> res;
        queue<int> q;
        vector<bool> visited(adj.size(),false);
        
        q.push(0);
        visited[0]=true;
        
        while(!q.empty()){
            int vertex=q.front();
            for(int neighbor:adj[vertex]){
                if(!visited[neighbor]){
                    visited[neighbor]=true;
                    q.push(neighbor);
                }
            }
            res.push_back(vertex);
            q.pop();
        }
        
        return res;
        
    }
};
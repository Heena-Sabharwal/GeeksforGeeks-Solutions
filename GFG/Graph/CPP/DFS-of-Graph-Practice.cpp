class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int>res;
        vector<bool>visited(adj.size(),false);
        
        helper(res,visited,0,adj);
        return res;
    }
    
    void helper(vector<int>&res, vector<bool>&visited, int vertex, vector<vector<int>>& adj){
        visited[vertex]=true;
        res.push_back(vertex);
        for(int neighbor:adj[vertex]){
            if(!visited[neighbor])
                helper(res,visited,neighbor,adj);
        }
    }
};
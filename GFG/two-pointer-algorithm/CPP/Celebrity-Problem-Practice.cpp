class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        vector<int>indegree(mat.size(),0);
        vector<int>outdegree(mat.size(),0);
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(mat[i][j]){
                    indegree[j]++;
                    outdegree[i]++;
                }
            }
        }
        
        for(int i=0;i<mat.size();i++){
            if(indegree[i]==mat.size() && outdegree[i]==1)
                return i;
        }
        return -1;
    }
};
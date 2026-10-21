class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        if(arr.size()==1)
            return arr;
        
        sort(arr.begin(),arr.end());
        vector<vector<int>>res;
        
        int current_start=arr[0][0];
        int current_end=arr[0][1];
        
        for(int i=1;i<arr.size();i++){
            if(current_end>=arr[i][0]){
                current_end=max(current_end,arr[i][1]);
            }
            else{
                res.push_back({current_start,current_end});
                current_start=arr[i][0];
                current_end=arr[i][1];
            }
        }
        res.push_back({current_start,current_end});
        return res;
    }
};
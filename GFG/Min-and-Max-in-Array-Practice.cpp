class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min_el=arr[0];
        int max_el=arr[0];
        
        for(int i=1;i<arr.size();i++){
            min_el=min(min_el,arr[i]);
            max_el=max(max_el,arr[i]);
        }
        
        return {min_el,max_el};
    }
};
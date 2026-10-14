class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max_el=arr[0];
        
        for(int i=1;i<arr.size();i++)
            max_el=max(max_el,arr[i]);
            
        return max_el;
    }
    
};
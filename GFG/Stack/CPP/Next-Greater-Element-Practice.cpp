class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int>res(arr.size(),-1);
        stack<int>ms;
        
        for(int i=0;i<arr.size();i++){
            while(!ms.empty() && arr[i]>arr[ms.top()]){
                res[ms.top()]=arr[i];
                ms.pop();
            }
            
            ms.push(i);
        }
        
        return res;
    }
};
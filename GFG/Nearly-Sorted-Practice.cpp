class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        
        int on_index=0;
        
        for(int i=0;i<arr.size();i++){
            if(pq.size()<k+1){
                pq.push(arr[i]);
                continue;
            }
            arr[on_index]=pq.top();
            pq.pop();
            on_index++;
            pq.push(arr[i]);
        }
        while(pq.size()){
            arr[on_index]=pq.top();
            pq.pop();
            on_index++;
        }
    }
};
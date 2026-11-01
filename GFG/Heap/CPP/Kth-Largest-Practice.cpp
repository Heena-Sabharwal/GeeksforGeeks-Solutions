class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>, greater<int>>pq;
        
        for(int i=0;i<arr.size();i++){
            if(pq.size()==k){
                pq.push(arr[i]);
                pq.pop();
            }
            else{
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};
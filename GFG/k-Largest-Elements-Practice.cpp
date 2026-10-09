class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < arr.size(); i++) {
        if(pq.size() < k) {
            pq.push(arr[i]);
        }
        else if(arr[i] > pq.top()) {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    vector<int> ans;
    while(!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
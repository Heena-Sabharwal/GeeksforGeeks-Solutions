class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        unordered_map<int,int>mp;
        
        for(auto num:arr){
            mp[num]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        for(auto it:mp){
            pq.push({it.second,it.first});
            if(pq.size()>k)
                pq.pop();
        }
        
        vector<int>res;
        auto it=pq;
        while(!it.empty()){
            res.push_back(it.top().second);
            it.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;
        
    }
};
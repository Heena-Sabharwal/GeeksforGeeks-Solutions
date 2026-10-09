class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        unordered_map<int, int> mp;
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                int key= mp[arr[i]];
                ans=min(ans,key);
            }
            else{
                mp[arr[i]]=i+1;
            }
        }
        if(ans!=INT_MAX)
            return ans;
        return -1;
    }
};
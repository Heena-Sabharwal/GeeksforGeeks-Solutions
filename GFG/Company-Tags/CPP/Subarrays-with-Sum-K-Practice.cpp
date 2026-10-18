class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> mp;
           mp[0] = 1;
           int prefix = 0;
           int count = 0;
           for(int x : arr){
               prefix += x;
               if(mp.count(prefix - k))
                   count += mp[prefix - k];
               mp[prefix]++;
           }
           return count;
       
    }
};
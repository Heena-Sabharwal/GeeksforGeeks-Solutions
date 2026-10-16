class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<char,int>mp;
        
        for(char c:s)
            mp[c]++;
        
        for(auto it:mp){
            if(it.second>1)
                it.second=0;
        }
        
        for(char c:s){
            if(mp[c]==1)
                return c;
        }
        
        return '$';
    }
};
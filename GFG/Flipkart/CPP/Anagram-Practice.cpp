class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        unordered_map<char,int>mp;
        
        for(char c:s1)
            mp[c]++;
        for (char c:s2)
            mp[c]--;
            
        for(auto it:mp){
            if(it.second!=0)
                return false;
        }
        return true;
    }
};
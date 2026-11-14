class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int count=0;
        int res=0;
        unordered_set<char>chars;
        
        int i=0,j=0;
        
        while(j<s.size()){
            if(chars.count(s[j])){
                while(i<j){
                    if(s[i]==s[j]){
                        i++;
                        break;
                    }
                    else{
                        chars.erase(s[i]);
                        i++;
                    }
                }
            }
            chars.insert(s[j]);
            j++;
            count=j-i;
            res=max(res,count);
        }
        
        return res;
    }
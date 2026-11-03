class Solution {
    vector<string>res;
  public:
    vector<string> powerSet(string &s) {
        // Code here
        int n=s.size();
        string temp="";
        solve(temp,0,n,s);
        
        sort(res.begin(),res.end());
        return res;
    }
    
    void solve(string temp, int index, int n, string &s){
        if(index==n){
            res.push_back(temp);
            return;
        }
        
        temp+=s[index];
        
        solve(temp,index+1,n,s);
        
        temp.pop_back();
        
        solve(temp,index+1,n,s);
    }
};
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        unordered_map<char,char>match;
        match['}']='{';
        match[')']='(';
        match[']']='[';
        
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                if(st.empty())
                    return false;
                if(st.top()!=match[c])
                    return false;
                else{
                    st.pop();
                }
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};
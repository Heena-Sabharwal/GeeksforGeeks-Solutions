class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        // code here
        user_p0myhs74cbkvector<bool>ans(arr.size(),false);
        vector<int>real_ans;
        
        for(int i=0;i<arr.size();i++){
            if(ans[arr[i]])
                real_ans.push_back(arr[i]);
            else{
                ans[arr[i]]=true;
            }
        }
        return real_ans;
    }
};
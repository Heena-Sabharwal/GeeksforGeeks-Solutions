class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>res;
        int num=-1;
        for(auto val:arr){
            if(val!=num){
                res.push_back(val);
                num=val;
            }
        }
        return res;
    }
};
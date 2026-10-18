class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        
        unordered_set<int>s;
        for(auto val:arr){
            if(s.count(target-val))
                return true;
            s.insert(val);
        }
        // for(auto val:arr){
        //     if(s.count(target-val))
        //         return true;
        // }
        return false;
    }
};
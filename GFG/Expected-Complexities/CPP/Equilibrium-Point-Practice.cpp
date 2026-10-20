class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sum=0;
        vector<int>prefix_sum(arr.size());
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            prefix_sum[i]=sum;
        }
        
        for(int i=0;i<arr.size();i++){
            if(i==0){
                if(sum-prefix_sum[i]==0)
                    return i;
            }
            else if(i==arr.size()-1){
                if(prefix_sum[arr.size()-2]==0)
                    return i;
            }
            else{
                if(prefix_sum[i-1]==sum-prefix_sum[i])
                    return i;
            }
        }
        return -1;
    }
};
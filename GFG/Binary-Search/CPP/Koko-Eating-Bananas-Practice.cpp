class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        if(k==arr.size()){
            return *max_element(arr.begin(),arr.end());
        }
        int low=1;
        int high=*max_element(arr.begin(),arr.end());
        int res=high;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int hours=0;
            for(int i=0;i<arr.size();i++){
                hours+=ceil((float)arr[i]/mid);
            }
            if(hours<=k){
                high=mid-1;
                res=min(res,mid);
            }
            else{
                low=mid+1;
            }
        }
        
        return res;
    }
};
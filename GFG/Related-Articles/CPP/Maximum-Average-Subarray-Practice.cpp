class Solution {
  public:
    int findMaxAverage(vector<int>& arr, int k) {
        // code here
        int index=0;
        int sum=0;
        
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int max_sum=sum;
        
        for(int i=k;i<arr.size();i++){
            sum+=arr[i];
            sum-=arr[i-k];
            if(sum>max_sum){
                max_sum=sum;
                index=i-k+1;
            }
        }
        return index;
    }
};
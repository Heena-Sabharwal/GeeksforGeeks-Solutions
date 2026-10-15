class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int j=0;
        int sum=0;
        int max_sum=0;
        
        for(int l=0;l<k;l++){
            sum+=arr[l];
        }
        max_sum=sum;
        
        for(int m=k;m<arr.size();m++){
            sum+=arr[m];
            sum-=arr[j];
            j++;
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};
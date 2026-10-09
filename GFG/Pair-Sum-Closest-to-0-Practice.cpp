class Solution {
  public:
    int closestToZero(int arr[], int n) {
        // your code here
        sort(arr,arr+n);
        int i=0;
        int j=n-1;
        int ans=INT_MAX;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(abs(sum)<abs(ans))
                ans=sum;
            if(abs(sum)==abs(ans)){
                if(sum>=0)
                    ans=sum;
            }
            if(sum<0)
                i++;
            else
                j--;
        }
        return ans;
    }
};
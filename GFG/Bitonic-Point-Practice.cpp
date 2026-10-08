class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int low=0, high=arr.size()-1;
        int mid;
        while(low<high){
            mid=(low+high)/2;
            if(arr[mid]<arr[mid+1])
                low=mid+1;
            else
                high=mid;
        }
        return arr[low];
    }
};
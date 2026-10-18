class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        if(arr.size()<=1)
            return 0;
        int width=arr.size()-1;
        int i=0;
        int j=arr.size()-1;
        int res=0;
        while(i<j){
            int val=min(arr[i],arr[j]);
            if(val*width>res)
                res=val*width;
            if(arr[i]<arr[j])
                i++;
            else
                j--;
            width--;
        }
        return res;
    }
};
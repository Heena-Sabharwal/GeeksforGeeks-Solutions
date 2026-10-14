class Solution {
  public:
    int convertFive(int n) {
        // code here
        if(n==0)
            return 5;
        int res=0;
        int power=0;
        while(n){
            int rem=n%10;
            n=n/10;
            if(rem==0){
                rem=5;
            }
            res+=pow(10,power)*rem;
            power++;
        }
        return res;
    }
};
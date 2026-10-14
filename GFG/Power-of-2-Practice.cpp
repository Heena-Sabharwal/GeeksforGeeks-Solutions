class Solution {
  public:
    bool isPowerofTwo(int n) {
        int v=4;
        return n > 0 && (n & (n - 1)) == 0;
        
    }
};
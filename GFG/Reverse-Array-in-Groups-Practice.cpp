class Solution {
  public:
    void reverseInGroups(vector<int>& arr, int k) {
        int n = arr.size();
        for (int index = 0; index < n; index += k) {
            reverse(arr, index, min(index + k - 1, n - 1));
        }
    }
    void reverse(vector<int>& arr, int start, int end) {
        int i = start;
        int j = end;
        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};
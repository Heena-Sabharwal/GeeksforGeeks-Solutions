class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        auto search = [&](bool first) {
            int low = 0, high = arr.size() - 1, ans = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == x) {
                    ans = mid;
                    if (first) high = mid - 1;
                    else low = mid + 1;
                }
                else if (arr[mid] < x) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
            return ans;
        };
        return {search(true), search(false)};
    }
};
class Solution {
public:
    bool isvalid(vector<int>& nums, int n, int k, int validnumber) {
        int count = 1;
        int arrsum = 0;
        for (int i = 0; i < n; i++) {

            if (nums[i] > validnumber)
                return false;
            if (arrsum + nums[i] <= validnumber) {
                arrsum += nums[i];
            } else {
                count++;
                arrsum = nums[i];
            }
        }
        return count > k ? false : true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int st = 0, end = sum;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (isvalid(nums, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};
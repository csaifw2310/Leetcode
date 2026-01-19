class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int val = nums[i];

            if (val < 0)
                swap(maxEnding, minEnding);

            maxEnding = max(val, maxEnding * val);
            minEnding = min(val, minEnding * val);

            ans = max(ans, maxEnding);
        }
        return ans;
    }
};

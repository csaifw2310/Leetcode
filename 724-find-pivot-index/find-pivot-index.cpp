class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for(int pivot = 0; pivot < n; pivot++) {
            int sum1 = 0, sum2 = 0;

            // Left sum
            for(int i = 0; i < pivot; i++) {
                sum1 += nums[i];
            }

            // Right sum
            for(int i = pivot + 1; i < n; i++) {
                sum2 += nums[i];
            }

            if(sum1 == sum2) return pivot;
        }

        return -1;
    }
};
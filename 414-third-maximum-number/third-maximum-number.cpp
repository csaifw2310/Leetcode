class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long fmax = LONG_MIN, smax = LONG_MIN, thmax = LONG_MIN;

        for (int num : nums) {
            if (num == fmax || num == smax || num == thmax) continue;

            if (num > fmax) {
                thmax = smax;
                smax = fmax;
                fmax = num;
            }
            else if (num > smax) {
                thmax = smax;
                smax = num;
            }
            else if (num > thmax) {
                thmax = num;
            }
        }

        return thmax == LONG_MIN ? fmax : thmax;
    }
};
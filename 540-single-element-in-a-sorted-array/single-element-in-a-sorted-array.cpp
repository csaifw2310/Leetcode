class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        if(n==1)return nums[0];
        if(nums[0]<nums[i+1]) return nums[i];
        if(nums[n-1]>nums[n-2]) return nums[n-1];
        while(i<n){
            if(nums[i]<nums[i+1] && nums[i]>nums[i-1]) return nums[i];
            i++;
        }
        return -1;
    }
};
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int curr=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            curr+=nums[i];
            ans.push_back(curr);
        }
        return ans;
    }
};
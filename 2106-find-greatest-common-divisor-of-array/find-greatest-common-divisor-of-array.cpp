class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n1,n2;
        sort(nums.begin(),nums.end());
        n1=nums[0];
        n2=nums[nums.size()-1];
  
    int ans=1;
    for(int i=2;i<=n1;i++){
        if(n1%i==0 && n2%i==0) ans=i;
    }
    return ans;
    }
};
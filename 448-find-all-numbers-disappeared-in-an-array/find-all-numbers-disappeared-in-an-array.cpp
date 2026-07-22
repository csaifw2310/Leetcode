class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
        unordered_map<int,bool>seen;
        for(int i=1;i<=n;i++){
            seen[i]=0;
        }
        for(int i=0;i<n;i++){
            seen[nums[i]]=1;
        }
        for(auto x : seen){
            if(x.second==0){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
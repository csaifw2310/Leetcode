class Solution {
public:

    void solve(int index,vector<int>& candidates,int target,int n, vector<int>& temp,vector<vector<int>>& ans){

        if( target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<n;i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(target<candidates[i]) break;

            temp.push_back(candidates[i]);
            solve(i+1,candidates,target-candidates[i],n,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        solve(0,candidates,target,n,temp,ans);
        return ans;
    }
};
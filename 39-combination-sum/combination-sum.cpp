class Solution {
public:
    void subsequences(vector<int>& arr, int index, int target,
                      int sum, vector<int>& temp,
                      vector<vector<int>>& ans)
    {
        if (sum == target) {
            ans.push_back(temp);
            return;
        }

        if (sum > target || index == arr.size())
            return;

        // Pick (reuse same element)
        temp.push_back(arr[index]);
        subsequences(arr, index, target, sum + arr[index], temp, ans);

        temp.pop_back();

        // Not Pick
        subsequences(arr, index + 1, target, sum, temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;

        subsequences(arr, 0, target, 0, temp, ans);

        return ans;
    }
};
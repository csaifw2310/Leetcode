class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int currSum=0;
        int maxSum=INT_MIN;
        
        for(int val:arr){
            currSum+=val;
            maxSum=max(maxSum,currSum);
            if(currSum<0) currSum=0;
        }
        return maxSum;
    }
};
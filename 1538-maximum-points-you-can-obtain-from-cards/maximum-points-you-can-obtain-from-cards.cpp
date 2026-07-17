class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int l=0;int r=k;
        int n=cardPoints.size();
        
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int ans=sum;
        for (int i = 1; i <= k; i++) {
            sum -= cardPoints[k - i];   // remove one from left
            sum += cardPoints[n - i];   // add one from right
            ans = max(ans, sum);
        }
        return ans;
    }
};
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n= mat.size();
           
        for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                if(i==j)sum+=mat[i][j];
                if(j==n-i-1) sum+=mat[i][j];
              }
        }
        if(n%2!=0)sum=sum-mat[n/2][n/2];
        return sum;
    }
};
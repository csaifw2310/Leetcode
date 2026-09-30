class Solution {
    private: 
            void dfs (int row, int col, vector<vector<int>>&ans, int delrow[],int delcol[], int newcolor, int inicolor,vector<vector<int>>&image){
                ans[row][col]=newcolor;
                int n = image.size();
                int m= image[0].size();
                for(int i=0;i<4;i++){
                    int nrow = row+delrow[i];
                    int ncol= col+delcol[i];
                    if(nrow<n && ncol<m && nrow>=0 && ncol>=0 && ans[nrow][ncol]!=newcolor && image[nrow][ncol]==inicolor ){
                        dfs(nrow,ncol,ans,delrow,delcol,newcolor,inicolor,image);
                    }

                }
            }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans = image;
        int inicolor = image[sr][sc];
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        dfs(sr,sc,ans,delrow,delcol,color,inicolor,image);
        return ans;
    }
};
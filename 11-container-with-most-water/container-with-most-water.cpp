class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int h=0;
        int maxh=0;
        while(j-i){
            h=(j-i)*min(height[i],height[j]);
            maxh=max(h,maxh);
            if(height[i]<height[j])
                i++;
            else 
                j--;
        }
        return maxh;
    }
};
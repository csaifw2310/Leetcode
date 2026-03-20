class Solution {
public:
    bool isvalid(vector<int>&position,int m, int n, int atvalidposn){
        int count=1;
        int ans=position[0];
        for(int i=0;i<n;i++){
            if(position[i]-ans>=atvalidposn){
                ans=position[i];
                count++;
            }
            if(count==m)return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        int low=1;
        int high=INT_MIN;
        int ans=1;
        sort(position.begin(),position.end());
        for(int i=0;i<n;i++){
            high=max(high,position[i]);
        }
        high=high-low;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isvalid(position,m,n,mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
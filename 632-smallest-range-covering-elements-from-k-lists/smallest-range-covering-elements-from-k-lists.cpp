class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
       priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>p;

        int minimum,maximum= INT_MIN;

       for(int i=0;i<nums.size();i++){
        p.push(make_pair(nums[i][0],make_pair(i,0)));
        maximum = max(maximum,nums[i][0]);
       } 
       vector<int>ans(2);
       pair<int,pair<int,int>>temp;
       minimum=p.top().first;
       ans[0]=minimum;
       ans[1]=maximum;
       int row,col,ele;
       while(p.size()==nums.size()){
        temp=p.top();
        p.pop();
        ele=temp.first;
        row=temp.second.first;
        col=temp.second.second;
        if(col+1<nums[row].size()){
            col++;
            p.push(make_pair(nums[row][col],make_pair(row,col)));
            maximum=max(maximum,nums[row][col]);
            minimum=p.top().first;
            if(maximum-minimum<ans[1]-ans[0]){
                ans[0]=minimum;
                ans[1]=maximum;
            }
        }
       }
       
        return ans;
    }
};
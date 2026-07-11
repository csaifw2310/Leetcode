class Solution {
public:
    bool isPalindrome(string s,int left,int right){
        while(left<=right){
            if(s[left++]!=s[right--] ){
                return false;
            } 
        }
        return true;
    } 
    void value(string s,int idx,vector<string>&tem,vector<vector<string>>&ans){
        if(idx==s.size()){
            ans.push_back(tem);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(isPalindrome(s,idx,i )){
                tem.push_back(s.substr(idx,i-idx+1));
            
            value(s,i+1,tem,ans);
            tem.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>tem;
        value(s,0,tem,ans);
        return ans;
    }
};
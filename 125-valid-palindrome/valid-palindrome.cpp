class Solution {
public:
    bool checkpalindrome(string &str,int i, int j){
        
        if(i>=j){
            return true;
        }
        if(str[i]!=str[j] ){
            return false;
        }
       return checkpalindrome(str,i+1,j-1);
    }
    bool isPalindrome(string s) {
        int n = s.size();
        string str="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
        if(str=="")return true;
        return checkpalindrome(str,0,str.size()-1);
    }
};
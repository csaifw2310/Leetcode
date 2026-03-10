class Solution {
public:
    void lpsfind(vector<int>&lps,string &s) {
        // code here
        
        int prefix=0,suffix=1;
        while(suffix<s.size()){
            if(s[suffix]==s[prefix]){
                lps[suffix]=prefix+1;
                prefix++;suffix++;
            }
            else{
                if(prefix==0){
                    lps[suffix]=0;
                    suffix++;
                }
                else{
                    prefix=lps[prefix-1];
                }
            }
        }
     
    }
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle); 
        int first=0, second=0;
        
        while(second<needle.size()&&first<haystack.size()){

            if(haystack[first]==needle[second]){
                first++;second++;
            }
            else{
                if(second==0){
                    first++;
                }
                else{
                    second=lps[second-1];
                }
            }

        }
        if(second== needle.size()){
            return first-second;
        }
        return -1;
            }
};
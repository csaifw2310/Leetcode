class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long ans = 0;
        int n=x;
        while(x){
            int d=x%10;
            ans=d+ans*10;
            x=x/10;
         }
         if (ans==n)return true;
         else return  false;
    }
};
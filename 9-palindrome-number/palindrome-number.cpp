class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int num=x;
        int ans=0;

        while(x){
            int digit=x%10;
            x/=10;
            if(ans>INT_MAX/10)return 0;
            ans=ans*10+digit;
        }
        if(ans==num) return true;
        else return false;
    }
};
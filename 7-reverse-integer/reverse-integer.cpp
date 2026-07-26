class Solution {
public:
    int reverse(int x) {
        int ans=0;
        int m=1;
        while(x){
            int d=x%10;
             if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && d > 7))
                return 0;

            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && d < -8))
                return 0;
            ans=ans*10+d;
            x/=10;
        }
        return  ans;
    }
};
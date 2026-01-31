class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long bn = n;
        if(n<0){
            bn=-bn;
            x=1/x;
        }
        while(bn){
            if(bn%2==1){
                ans*=x;
            }
            x*=x;
            bn/=2;

        }
        return ans;
    }
};
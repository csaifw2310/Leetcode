class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        while(n ){
            int digits=n%10;
            sum+=digits;
            product*=digits;
            n/=10;
        }
        return product-sum;
    }
};
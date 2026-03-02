class Solution {
public:

int countPrimes(int n) {

    if(n <= 2) return 0;              // no primes less than 2

    vector<bool> prime(n, true);      // assume all numbers are prime initially

    prime[0] = false;                 // 0 is not prime
    prime[1] = false;                 // 1 is not prime

    // check numbers till sqrt(n)
    for(int i = 2; i * i < n; i++) {

        if(prime[i]) {                // if i is still prime

            // mark all multiples of i as not prime
            for(int j = i * i; j < n; j += i) {
                prime[j] = false;     // eliminate multiple
            }
        }
    }

    int count = 0;                    // count of primes

    // count remaining true values
    for(int i = 2; i < n; i++) {
        if(prime[i]) count++;         // if still true → prime number
    }

    return count;                     // return total primes less than n
}
};
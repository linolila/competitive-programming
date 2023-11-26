class Solution {
public:
    int countPrimes(int n) {
           if (n <= 2) {
            return 0;
        }
         bool isPrime[n];
        std::fill(isPrime, isPrime + n, true); 
 for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {  // mark multiples of prime numbers as non-prime
                    isPrime[j] = false;
                }
            }
        }
        
        int count = 0;
        for (int i = 2; i < n; i++) {  // count the number of prime numbers
            if (isPrime[i]) {
                count++;
            }
        }
        
        return count;
    }
};
 

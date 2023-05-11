#include <vector>

class Solution {
public:
    
    int countPrimes(int n) {
        if(n<=2) {
            return 0;
        }
        vector<bool> prime(n,false);
        int ans = 1;
        int upperBound = sqrt(n);
        for(int i = 3 ; i < n ; i+=2) {
            if(!prime[i]) {
                ans ++;
                if( i > upperBound) continue;
                for(int j = i*i; j < n; j+=i) {
                    prime[j] = true;
              }
            }
        }
       return ans;
    }
};

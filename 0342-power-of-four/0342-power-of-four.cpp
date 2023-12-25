class Solution {
public:
    bool power(int n) {
        if(n == 0) return false;
        if(n == 1) return true;
        
        return (n%4 == 0 && power(n/4));
        
    }
    bool isPowerOfFour(int n) {
        return power(n);
    }
};
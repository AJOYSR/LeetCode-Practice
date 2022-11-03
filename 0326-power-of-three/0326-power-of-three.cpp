class Solution {
public:
    bool isPowerOfThree(int n) {
        int c= 0;
        int x = n;
        if(n<3&& n!=1) return false;
        while(x>=3)
        {
            x/=3;
            c++;
        }
        if(pow(3,c)==n){
            return true;
        }
        return false;
    }
};
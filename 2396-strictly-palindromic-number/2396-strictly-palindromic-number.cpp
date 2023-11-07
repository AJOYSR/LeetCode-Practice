class Solution {
public:
bool ispaldrome(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size() - 1 - i])
            return false;
    }
    return true;
}
    bool checker(int n, int base) {
        string x = "";
        while(n > 0) {
            char ch = (n%base) + '0';
            x+=ch;
            n/=base;
        }
        
        return (ispaldrome(x));
        
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<=n-2; i++){
            int temp = n;
            if(!checker(temp, i))
                return false;
        }
        return true;
    }
};
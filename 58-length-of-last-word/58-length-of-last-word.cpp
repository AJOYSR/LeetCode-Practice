class Solution {
public:
    int lengthOfLastWord(string s) {
        int siz=s.size(),ans=0,flag=0;
        for(int i=siz-1;i>=0;i--){
            if(s[i]==' '&&flag)break;
            if(s[i]!=' '){
                flag=1;
                ans++;
            }
        }
        return ans;
    }
};
class Solution {
public:
string smallestNumber(string &pat) {
        int n=pat.size();
        string res;
        for(int i=0;i<=n;++i){
            res += i+'1';
        }
        while(true){
            bool flag=true;
            for(int i=0;i<n;++i){
                if(pat[i]=='I'&&res[i]>res[i+1]){
                    swap(res[i],res[i+1]);
                    flag=false;
                } else if(pat[i]=='D'&&res[i]<res[i+1]){
                    swap(res[i],res[i+1]);
                    flag=false;
                }
            }
            if(flag) break;
        }
        return res;
    }
};
class Solution {
public:
    int countAsterisks(string s) {
        int bar=0,count=0;
        int ans = 0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='*') count ++;
            if(bar==0 && s[i]=='|') {
                ans+=count;
                count = 0;
                bar++;
                continue;
            }
            if(s[i]=='|') {
                bar++;
                if(bar%2) {
                    ans+=count;
                    count=0;
                }
                else{
                    count=0;
                }
}

     }
            
      
        return ans + count;
    }
};
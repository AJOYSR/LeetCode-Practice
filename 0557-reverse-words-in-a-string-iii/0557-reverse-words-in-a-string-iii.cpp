class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string x="";
        for(int i=0;i<s.size();i++) {
            if(s[i]==' ') {
                
                reverse(x.begin(),x.end());
                ans+=x;
                ans+=" ";
                x="";
            }
            else{
                x+=s[i];
            }
        }
          reverse(x.begin(),x.end());
                ans+=x;
        return ans;
    }
};
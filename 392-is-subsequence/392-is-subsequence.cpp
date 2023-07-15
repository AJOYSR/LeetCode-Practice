class Solution {
public:
    bool isSubsequence(string s, string t) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]] = 1;
        }
        string ans = "";
        int j =0;
        for(int i=0;i<t.size();i++){
            if(s[j]==t[i]) {
                ans+=s[j];
                j++;
            }
        }
        return (ans == s);
    }
};
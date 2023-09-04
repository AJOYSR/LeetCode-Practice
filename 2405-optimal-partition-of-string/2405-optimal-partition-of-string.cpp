class Solution {
public:
    int partitionString(string s) {
        int ans = 0,cnt=0;
        set<char>st;
        
        for(int i=0;i<s.size();i++) {
                st.insert(s[i]);
                cnt++;
            
                if(st.size() < cnt ) {
                ans++;
                cnt = 0;
                st.clear();
                i--;
            }
            
        }
        if(cnt) ans++;
        return ans;
    }
}; 
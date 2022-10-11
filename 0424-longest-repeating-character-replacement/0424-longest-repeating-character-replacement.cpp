class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        map<char,int>mp;
        int start = 0;
        int ans = 0,mxcount=0; 
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            mxcount = max(mxcount,mp[s[i]]);
            
            if(i - start+1 - mxcount > k){
                mp[s[start]]--;
                start++;
            }
            ans = max(ans,(i - start)+1);
           
        }
        return ans;
    }
};
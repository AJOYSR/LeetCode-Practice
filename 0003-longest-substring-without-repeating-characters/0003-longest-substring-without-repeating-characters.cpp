class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    
    {
        int n = s.size();
        int ans = 0;
        vector<int> mp (256,-1);
        int left=0,right = 0;
        while(right < n)
        {
            if(mp[s[right]]!=-1) left = max(left,mp[s[right]]+1);
            mp[s[right]] = right;
            
            ans = max(ans,right - left + 1);
            right++;
        }
        return ans;

        
        
    }
};
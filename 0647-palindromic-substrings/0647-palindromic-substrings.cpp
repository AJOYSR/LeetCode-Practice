class Solution {
public:
    int countSubstrings(string s) {
        
        
         int ans = 0;
        for(int i=0;i<s.size();i++)
        {
            int len1 = expandFromCenter(s,i,i+1);
            int len2 = expandFromCenter(s,i,i);
            int len = len1+len2;
            
            ans+=len;
            
        }
        //int k = end-start+1;
        return ans;
    }
    int expandFromCenter(string s, int i,int j)
    {
        int  c = 0;
        while(i>=0 && j <s.size() && s[i]==s[j])
        {
            i--;j++;
            c++;
        }
        return c;
            
    }
    
};
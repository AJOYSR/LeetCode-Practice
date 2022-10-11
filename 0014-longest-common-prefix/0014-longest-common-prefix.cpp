class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string small = strs[0];
        string largest = strs[strs.size()-1];
        string ans = "";
        for(int i=0;i<small.size();i++){
            if(small[i]!=largest[i]) break;
            ans+=small[i];
        }
        return ans;
    }
};
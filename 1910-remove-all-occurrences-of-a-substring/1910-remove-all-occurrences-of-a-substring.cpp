class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        string ans;
        for(char ch : s) {
            ans.push_back(ch);
            if(ans.size() >= part.size() && ans.substr(ans.size() - part.size()) == part) {
                int removePartSizeChar = part.size();
                while(removePartSizeChar--) {
                    ans.pop_back();
                }
            }
        }
        return ans;
    }
};
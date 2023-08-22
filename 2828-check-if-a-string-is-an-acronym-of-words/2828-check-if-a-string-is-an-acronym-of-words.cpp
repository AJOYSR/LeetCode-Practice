class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        bool acronym = true;
        int i = 0;
        if(s.size()!=words.size()) return false;
        for(string word : words)
        {
            if(s[i]!=word[0]) {
                return false;
            }
            i++;
        }
        return acronym;
    }
};
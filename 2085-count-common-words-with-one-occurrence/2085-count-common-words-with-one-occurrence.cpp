class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> mp1, mp2;
        vector<string> matchedStrings;
        
        for (string em : words1) {
            mp1[em]++;
            if (find(words2.begin(), words2.end(), em) != words2.end()) {
                matchedStrings.push_back(em);
            }
        }
        
        for (auto em : words2) {
            mp2[em]++;
        }
        
        int ans = 0;
        for (auto em : matchedStrings) {
            if (mp1[em] == 1 && mp2[em] == 1) {
                ans++;
            }
        }
        return ans;
    }
};

class Solution {
public:
  int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m;
        int cnt  = 0;
        for(auto & w: words1) m[w]++;
        for(auto & w: words2) {
            auto it = m.find(w);
            if (it == m.end()) continue;
            if (it->second < 2) it->second--;
            
            if (it->second == 0) ++cnt;
            else if(it->second == -1)--cnt;
        }
        return cnt;
    }
};

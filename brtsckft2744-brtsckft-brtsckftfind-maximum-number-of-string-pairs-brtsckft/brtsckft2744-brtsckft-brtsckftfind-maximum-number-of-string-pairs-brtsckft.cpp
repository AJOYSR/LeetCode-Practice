class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans;
        for(int i=0;i<words.size();i++) {
            for(int j=i+1;j<words.size();j++) {
                string x = words[i],y = words[j];
                if((x[0]==y[1] && x[1]==y[0])) ans++;
         }
      }
        return ans;
    }
};
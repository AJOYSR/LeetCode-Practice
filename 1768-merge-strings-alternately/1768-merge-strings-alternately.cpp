class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        if(word1.length() > word2.length()) {
            int i=0;
            for( i=0;i<min(word1.length() , word2.length());i++){
                ans+=word1[i];
                ans+=word2[i];
            }
                for(int j=i;j<word1.length();j++){
                ans+=word1[j];
            }
        }
        else {
            int i=0;
              for( i=0;i<min(word1.length() , word2.length());i++) {
                ans+=word1[i];
                ans+=word2[i];
            }
                for(int  j=i;j<word2.length();j++){
                ans+=word2[j];
            }
        }
        return ans;
    }
};
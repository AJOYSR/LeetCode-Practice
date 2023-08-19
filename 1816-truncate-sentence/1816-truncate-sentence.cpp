class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream str(s);
        string word,ans="";
        while(str >> word && k)
        {
            if(k == 1)
            {
                ans+=word;
            }
            else {
                ans+=word+" ";
            }
            k--;
        }
         return ans;
    }
   
};
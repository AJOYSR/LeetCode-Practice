class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        stringstream ss(text);
        string word, biagram1,biagram2;
        while(ss >> word )
        {
            if(first == biagram1 && second == biagram2) 
                ans.push_back(word);
            biagram1 = biagram2;
            biagram2 = word;
        }
        return ans;
    }
};
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        char empty = ' ';
        vector<string> temp;

        for (int i = 0; i < n;) {
            if (s[i] != empty) {
                string tempWord = "";

                while (i < n && s[i] != empty) {
                    tempWord += s[i];
                    i++;
                }
                temp.push_back(tempWord);
            } else
                i++;
        }

        string ans = "";
        for (int i = temp.size() - 1; i >= 0; i--) {
            ans += temp[i];
            ans += " ";
        }
        // Remove the trailing space
        if (!ans.empty()) {
            ans.pop_back();
        }
        return ans;
    }
};
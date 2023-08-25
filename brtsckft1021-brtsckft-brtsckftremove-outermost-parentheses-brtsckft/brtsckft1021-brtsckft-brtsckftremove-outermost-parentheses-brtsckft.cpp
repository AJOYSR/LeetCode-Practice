class Solution {
public:
    string removeOuterParentheses(string S) {
        int count = 0;
        string ans="";
        for (char c : S) {
            if (c == '(') {
                if (count++) {
                    ans += '(';
                }
            } else {
                if (--count) {
                    ans += ')';
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    int minimizedStringLength(string s) {
        set<int> st;
        for(char ch : s) {
            st.insert(ch);
        }
        
        return st.size();
    }
};
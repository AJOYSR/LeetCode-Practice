class Solution {
public:
    bool isPalindrome(string s) {
        string news = "";
        for(char ch : s)
        {
            if(ch >='A' && ch <='Z' || ch>='a' && ch<='z'){
                char c = tolower(ch);
                news+=c;
            }
            if(isdigit(ch)){
                news+=ch;
            }
        }
        
        for(int i=0;i<(news.size())/2;i++){
            if(news[i]!=news[news.size()-1-i]) return false;
        }
        return true;
    }
};
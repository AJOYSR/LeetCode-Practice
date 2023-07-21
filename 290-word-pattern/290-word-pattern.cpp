class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        int k = 0;
        
        for (int i = 0; i < pattern.length(); i++) {
            string word;
            while (k < s.length() && s[k] != ' ') {
                word += s[k];
                k++;
            }
            k++; // Move past the space
            if(word.length() == 0)
            return false;
            char c = pattern[i];
            if (charToWord.count(c)) {
                if (charToWord[c] != word)
                    return false;
            } else {
                if (wordToChar.count(word))
                    return false;
                charToWord[c] = word;
                wordToChar[word] = c;
            }
        }
        
        // Check if we have processed the entire string s and pattern
        return k >= s.length() && k >= pattern.length();
    }
};
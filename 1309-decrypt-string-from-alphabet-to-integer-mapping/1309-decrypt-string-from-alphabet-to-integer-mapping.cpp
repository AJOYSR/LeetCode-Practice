class Solution {
public:
    string freqAlphabets(string s) {
        map<string, char> mp;
        char letter = 'a';
        for (int i = 1; i <= 26; i++) {
            if (i <= 9) {
                string x = to_string(i);
                mp[x] = letter++;
            } else {
                string x = to_string(i) + '#';
                mp[x] = letter++;
            }
        }
        string ans = "";
//         for(auto it: mp) {
//             cout <<it.first << " " << it.second<<endl;
            
//         }
        
        for (int i = 0; i < s.size();) {
            if (i + 2 < s.size()) {
                if (s[i + 2] == '#') {
                    string x = s.substr(i, 2);
                    x+='#';
                    ans += mp[x];
                    i += 3;
                } else {
                    string x = s.substr(i, 1);
                    ans += mp[x];
                    i++;
                }
            } else {
                string x = s.substr(i, 1);
                ans += mp[x];
                i++;
            }
        }
        return ans;
    }
};

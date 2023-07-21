class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp;
        for(int i=0;i<magazine.size();i++) {
            mp[magazine[i]]++;
        }
        for (char ch : ransomNote) {
            mp[ch]--;
            if(mp[ch]<0) return false;
            
}
        return true;
    }
};
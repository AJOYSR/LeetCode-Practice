class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<int,int>map1,map2;
        

        if(s.length()!=t.length())
            return false;


        for(int i=0;i<s.length();i++)
        {
            if(map1[s[i]]!=map2[t[i]])
                return false;

            map1[s[i]]=i+1;
            map2[t[i]]=i+1;
        }
        return true;
    }
};
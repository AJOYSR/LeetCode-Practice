class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int idx;
        if(ruleKey =="type") idx = 0;
        if(ruleKey =="color") idx = 1;
        if(ruleKey =="name") idx = 2;
        int ans =0;
        
        for(int i=0;i<items.size();i++)
        {
           if(items[i][idx] ==ruleValue) ans++;
        }
//         for(vec: items)
//         {
            
//         }
        return ans;
}
};
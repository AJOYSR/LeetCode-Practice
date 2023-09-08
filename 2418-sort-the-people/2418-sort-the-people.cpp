class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>vc;
        for(int i=0;i<names.size();i++) {
            vc.push_back({heights[i],names[i]});
        }
        sort(vc.rbegin(),vc.rend() );
        vector<string> ans;
        for(auto it : vc)  {
            ans.push_back(it.second);
        }
        return ans;
    }
};
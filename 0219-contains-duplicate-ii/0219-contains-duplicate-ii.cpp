class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++) {
            v.push_back({nums[i],i+1});
            
         }
        
        sort(v.begin(),v.end());
        // cout << v[0].first << " " << v[0].second<<endl;
        //  cout << v[1].first << " " << v[1].second<<endl;
        
        for(int i=0;i<v.size()-1;i++) {
            if(v[i].first == v[i+1].first && abs(v[i].second - v[i+1].second)<=k){
                return true;
           }
        }
        
        return false;
        
    }
};
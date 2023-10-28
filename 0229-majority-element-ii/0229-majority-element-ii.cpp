class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       
        map<int,int>mp;
        vector<int> ans;
        set<int> st;
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>n/3){
                st.insert(nums[i]);
               
            }
        }
        for( int elm : st)  ans.push_back(elm);
        return ans;
    }
};
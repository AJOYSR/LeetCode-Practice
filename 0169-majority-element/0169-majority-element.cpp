class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int ans;
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>n/2){
                ans = nums[i];
            }
        }
        return ans;
    }
};
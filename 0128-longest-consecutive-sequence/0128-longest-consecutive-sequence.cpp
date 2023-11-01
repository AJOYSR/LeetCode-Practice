class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++){
           st.insert(nums[i]);
        }
        
        int ans = 0;
        
        for(int i=0;i <n ;i++)
        {
            int count = 1;
            if(st.find(nums[i]-1)==st.end())
            {
                int currentnum = nums[i];
                while(st.find(currentnum+1)!=st.end())
                {
                    currentnum++;
                    count++;
                }
            }
            ans = max(ans,count);
        }
        return ans;
        
    }
};
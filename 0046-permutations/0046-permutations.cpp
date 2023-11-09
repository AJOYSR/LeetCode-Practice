class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;
        
        do {
            
            vector<int> temp;
            for(int i=0;i<nums.size();i++) {
                temp.push_back(nums[i]);
            }
            ans.push_back(temp);
        }
        while(next_permutation(nums.begin(),nums.end()));
            return ans;
    }

};
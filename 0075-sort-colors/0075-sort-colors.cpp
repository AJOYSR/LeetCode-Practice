class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> one, zero, two;
        for(int i=0; i < nums.size();i++ )
        {
            if(nums[i]==0) zero.push_back(nums[i]);
            if(nums[i]==1) one.push_back(nums[i]);
            if(nums[i]==2) two.push_back(nums[i]);
        }
        int id = 0;
        for(int i=0;i<zero.size();i++) nums[id++] = 0;
        for(int i=0;i<one.size();i++) nums[id++] = 1;
        for(int i=0;i<two.size();i++) nums[id++] = 2;
    }
};
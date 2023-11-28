class Solution {
public:
  vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int indexpositive = 0, indexnegative=1;
        for(auto num: nums){
            if(num > 0){
                ans[indexpositive] = num;
                indexpositive +=2;
            }
            if(num < 0){
                ans[indexnegative] = num;
                indexnegative += 2;
            }
        }
        return ans;
        
    }
};
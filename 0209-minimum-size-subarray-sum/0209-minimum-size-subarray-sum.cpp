class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), total = 0, last = 0, ans = INT_MAX,sum=0;
        for(int i = 0; i < n ; i++) {
            total += nums[i];
            while(total >= target) {
                ans = min(ans, i+1-last);
                total -= nums[last++];
            }
        }
        return (ans == INT_MAX ? 0 : ans);
    }
};
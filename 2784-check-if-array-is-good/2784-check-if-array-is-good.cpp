class Solution {
public:
bool isGood(vector<int>& nums) {
    int n = nums.size() - 1;
    sort(begin(nums), end(nums));
    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] != min(n, i + 1))
            return false;
    return true;
}
};
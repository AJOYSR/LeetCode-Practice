class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<long long> prefix(n + 1);
        vector<int> ans(m);

        sort(nums.begin(), nums.end());
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + nums[i - 1];
        }

        for (int i = 0; i < queries.size(); i++) {
            int q = queries[i];
            auto it = lower_bound(prefix.begin(), prefix.end(), q);
            int lb = (it != prefix.end()) ? (it - prefix.begin()) : n;
            if (lb == n + 1) {
                ans[i] = n;
                continue;
            }
            if (prefix[lb] > q) lb--;

            ans[i] = lb;
        }
        return ans;
    }
};

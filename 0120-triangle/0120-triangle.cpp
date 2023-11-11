class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        for (int row = n-1; row >= 0; row--) {
            for (int idx = row; idx >= 0; idx--) {
                int down = dp[row + 1][idx];
                int downRight = dp[row + 1][idx + 1];
                dp[row][idx] = triangle[row][idx] + min(down, downRight);
            }
        }

        return dp[0][0];
    }
};
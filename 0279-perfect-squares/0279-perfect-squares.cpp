class Solution {
public:
   int numSquares(int n)
{
    vector<int>dp(n+1,INT_MAX);
    dp[0] = 0;
    int num = 1;
    while(num * num<=n)
    {
        int k = num * num;
        for(int i=k;i<n+1;i++)
        {
            dp[i] = min(dp[i],dp[i-k] + 1);
        }
        num++;
    }
    return dp[n];
}

};
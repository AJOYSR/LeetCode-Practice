class Solution {
public:
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size(); i++)
    {
        vector<int> v = intervals[i];
        if (v[0] <= tempInterval[1])
        {
            tempInterval[1] = max(tempInterval[1], v[1]);
        }
        else
        {
            ans.push_back(tempInterval);
            tempInterval = intervals[i];
        }
    }
    ans.push_back(tempInterval);
    return ans;
}
};
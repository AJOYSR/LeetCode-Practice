class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(string op : operations)
        {
            if(op[0]=='+' || op[2]=='+') ans++;
            else ans--;
        }
        return ans;
    }
};
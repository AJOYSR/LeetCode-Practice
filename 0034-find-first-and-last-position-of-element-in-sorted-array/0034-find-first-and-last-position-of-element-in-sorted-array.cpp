class Solution {
public:
int first(vector<int> & arr, int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}
 

int last(vector<int> & arr, int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1])
            && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}
 
    vector<int> searchRange(vector<int> &nums, int target) {
        int l = 0, r = nums.size() - 1;
        int left = first(nums, 0, r, target, nums.size());
        int right = last(nums, 0, r, target,nums.size());

        vector<int> ans;
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }
};

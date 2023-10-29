class Solution {
public:
    void merge(int left, int mid, int right, vector<int>& nums) {
        int leftSize = mid - left + 1, rightSize = right - mid;
        int* leftArr = new int[leftSize];
        int* rightArr = new int[rightSize];

        for(int i = left; i <= mid; i++)
            leftArr[i - left] = nums[i];
        
        for(int j = mid+1; j <= right; j++)
            rightArr[j - mid-1] = nums[j];

        int i = 0, j = 0;
        int k = left;

        while(i < leftSize && j < rightSize) {
            if(leftArr[i] <= rightArr[j])
                nums[k++] = leftArr[i++];
            else 
                nums[k++] = rightArr[j++];
        }

        while(i < leftSize) nums[k++] = leftArr[i++];

        while(j < rightSize) nums[k++] = rightArr[j++];

        // delete(leftArr);
        // delete(rightArr);

        return;        
    }
    int count(int left, int mid, int right, vector<int>& nums) {
        int i = mid, j = right;
        int cnt = 0;
        while(i >= left && j >= mid+1) {
            long long prd = (long long)2*nums[j];
            if(nums[i] > prd) {
                cnt += j - mid ;
                i--;
            }
            else 
                j--;
        }

        return cnt;
    }
    void mergeSort(int left, int right, vector<int>& nums, int& ans) {
        if(left == right)
            return;

        int mid = left + (right - left)/2;

        mergeSort(left, mid, nums, ans);
        mergeSort(mid + 1, right, nums, ans);

        ans += count(left, mid, right, nums);

        merge(left, mid, right, nums);
    }
    int reversePairs(vector<int>& nums) {
        int ans = 0;
        mergeSort(0, nums.size()-1, nums, ans);
        return ans;
    }
};
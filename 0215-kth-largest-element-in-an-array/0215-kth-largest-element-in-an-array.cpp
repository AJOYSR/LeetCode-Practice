class Solution {
public:
 int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
        pq.push(-nums[i]);
    for (int i = k; i < nums.size(); i++)
    {
        int num = -nums[i];
        if (num < pq.top())  // number ta zoto choto, toto boro seta, minus deya tai
        {
           // cout << nums[i] << " " << pq.top() << endl;
            pq.pop();

            pq.push(-nums[i]);
        }
    }
    return (-pq.top());
}
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int ans ;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         ans = (nums[i]);
        //         break;
        //     }
        // }
        // return ans;
        
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
           
            
        } while(slow!=fast);
        
        fast = nums[0];
        while(slow!=fast) {
            slow = nums[slow];
            fast = nums[fast];
             cout << slow << " " << fast <<endl;
        }
        return slow;
    }
};
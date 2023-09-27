class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        set<int> st;
        for(int i= 0 ;i< nums.size(); i++) {
            mp[nums[i]]++; // counting the frequency of each number
            st.insert(nums[i]); // storing the unique elements
        }
        
        int ans = 0;
    
        for( int num : st ) {
            if(mp[num] >= 2)  {     // freq >= 2 means we can create the pair
                int freq = mp[num]; // frequency , we can make pair like 1+2+3...(freq-1) times
                freq = freq-1;
                int sum = ((freq)*(freq+1))/2; // sum upto freq-1 
                ans+=sum;
            }       
        }
        return ans;
    }
};
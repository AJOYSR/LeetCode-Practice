class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x = 0;
        for(int elm : nums) {
            x^= elm;
        }
        return x;
    }
};
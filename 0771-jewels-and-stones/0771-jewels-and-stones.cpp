class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int num=0;
        for(const auto jewel : jewels)  {
           num += count(stones.begin(), stones.end(), jewel);
       }
         return num;
    }
};